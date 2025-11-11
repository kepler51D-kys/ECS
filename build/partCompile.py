#!/bin/python
import yaml

class partsCompiler:
    def ComponentsToHeader(self):
        f = open("parts/components.yaml","r")
        contents = yaml.safe_load(f)
        includes = []
        headerString = ""
        names = list(contents.keys())
        try: names.remove("includes")
        except: pass
        i = 0
        for component in contents:
            if (component != "includes"):
                format = "\ttypedef struct {\n"
                for part in contents[component]:
                    format += f"\t\t{part};\n"
                format += "\t}" + f" {names[i]};\n\textern std::vector<{names[i]}> {names[i]}_arr;\n\n"
                i+=1
                headerString += format
            else:
                for include in contents[component]:
                    includes.append(include)
        with open("headers_autogen/components.hpp","w") as f:
            finalString = "#pragma once\n"
            for include in includes:
                finalString += f"#include \"{include}\"\n"
            finalString += "\nnamespace component {\n"
            finalString += headerString
            finalString += "}"
            f.write(finalString)
        with open("headers_autogen/components.cpp","w") as f:
            finalString = "#include \"components.hpp\"\n"
            for name in names:
                finalString += f"std::vector<component::{name}> {name}_arr;\n"
            f.write(finalString)
        return names

    def EntityToHeader(self):
        f = open("parts/entity.yaml","r")
        contents = yaml.safe_load(f)
        includes = ["components.hpp"]
        headerString = ""
        names = list(contents.keys())
        try: names.remove("includes")
        except: pass
        i = 0
        for component in contents:
            if (component != "includes"):
                format = "typedef struct {\n"
                for part in contents[component]:
                    format += f"\tcomponent::{part} {part};\n"
                format += "}" f" {names[i]};\n"
                i+=1
                headerString += format
            else:
                for include in contents[component]:
                    includes.append(include)
        with open("headers_autogen/entity.hpp","w") as f:
            finalString = "#pragma once\n"
            for include in includes:
                finalString += f"#include \"{include}\"\n"
            finalString += "namespace entity {\n"
            finalString += headerString
            finalString += "}"
            f.write(finalString)
        return names
    
    def __init__(self):
        self.compNames = self.ComponentsToHeader()
        self.entityNames = self.EntityToHeader()

# partsBuilder = partsCompiler()
# print(partsBuilder.compNames)
# print(partsBuilder.entityNames)