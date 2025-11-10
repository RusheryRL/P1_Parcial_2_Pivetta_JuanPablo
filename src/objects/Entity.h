#pragma once
#include "raylib.h"


class Entity
{
protected:
	float x;
	float y;
	float h;
	float w;
	Color color;
public:
	Entity(float x, float y, float w, float h, Color color);
	virtual ~Entity();

	virtual void draw() = 0;
};