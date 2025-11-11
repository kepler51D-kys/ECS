#pragma once
#include "vector"
#include "../headers_autogen/vectors/vectors.hpp"
#include "../headers_premade/types/basic.hpp"

namespace component {
	typedef struct {
		i32 x;
		i32 y;
		i32 z;
	} Position3D;
	extern std::vector<Position3D> Position3D_arr;

	typedef struct {
		i32 x;
		i32 y;
	} Position2D;
	extern std::vector<Position2D> Position2D_arr;

	typedef struct {
		i32 x;
		i32 y;
		i32 z;
	} Speed3D;
	extern std::vector<Speed3D> Speed3D_arr;

	typedef struct {
		i32 x;
		i32 y;
	} Speed2D;
	extern std::vector<Speed2D> Speed2D_arr;

	typedef struct {
		std::vector<v3<float>> vertices;
	} Mesh3D;
	extern std::vector<Mesh3D> Mesh3D_arr;

	typedef struct {
		v3<float> Position;
		v3<float> Speed;
	} RigidBody3D;
	extern std::vector<RigidBody3D> RigidBody3D_arr;

}