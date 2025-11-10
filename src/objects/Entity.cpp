#include "Entity.h"

Entity::Entity(float x, float y, float w, float h, Color color)
{
	this->x = x;
	this->y = y;
	this->w = w;
	this->h = h;
	this->color = color;
}

Entity::~Entity()
{
}