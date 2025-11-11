#include "../../headers_autogen/components.hpp"
#include "system_run.hpp"

void RigidBody3D_run() {
    for (int i = 0; i < component::RigidBody3D_arr.size(); i++) {
        component::RigidBody3D_arr[i].Position += component::RigidBody3D_arr[i].Speed;
    }
}
void Mesh3D_run() {
    for (int i = 0; i < component::Mesh3D_arr.size(); i++) {
        // render each mesh
    }
}