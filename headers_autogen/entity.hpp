#pragma once
#include "components.hpp"
namespace entity {
typedef struct {
	component::position3D position3D;
	component::speed3D speed3D;
} transform3D;
}