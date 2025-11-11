#!/bin/python
import os
import subprocess

def compileSystems():
    os.makedirs("systems/object", exist_ok=True)
    os.makedirs("systems/compiled", exist_ok=True)
    
    src_dir = "systems/src"
    obj_dir = "systems/object"
    compiled_dir = "systems/compiled"

    for file in os.listdir(src_dir):
        if file.endswith(('.cpp', '.cxx', '.cc', '.c++')):
            name = os.path.splitext(file)[0]
            src_file = os.path.join(src_dir, file)
            obj_file = os.path.join(obj_dir, f"{name}.o")
            so_file = os.path.join(compiled_dir, f"{name}.so")
            
            print(f"Compiling {file}...")
            
            compile_result = subprocess.run([
                "g++", "-c", "-fPIC", src_file, "-o", obj_file
            ], capture_output=True, text=True)
            
            if compile_result.returncode != 0:
                print(f"Error compiling {file}:")
                print(compile_result.stderr)
                continue
            
            # Create shared library
            link_result = subprocess.run([
                "g++", "-shared", "-o", so_file, obj_file
            ], capture_output=True, text=True)
            
            if link_result.returncode != 0:
                print(f"Error linking {file}:")
                print(link_result.stderr)
            else:
                print(f"Success: {so_file}")
        else:
            print("unrecognised file type")
    else:
        print("no files found")