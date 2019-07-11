﻿#pragma once

#include "../../Collision/CollisionDefinition.h"
#include "CollisionObjectParameter.h"
#include <string>

struct  MapObjectParameter:public CollisionObjectParameter
{
	MapObjectParameter(
		CollisionType type,
		std::string sprite_name,
		float x, 
		float y,
		float z=1.f, 
		float rot=0.f,
		float scale_x=1.f,
		float scale_y=1.f
	):CollisionObjectParameter(
		type,
		sprite_name,
		x, y, z,
		rot,
		scale_x,
		scale_y
	){
	}

	MapObjectParameter() {
	}
};
