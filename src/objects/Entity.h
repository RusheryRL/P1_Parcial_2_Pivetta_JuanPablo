#pragma once
class Entity
{
protected:
	float x;
	float y;
	float h;
	float w;
public:
	Entity(float x, float y, float w, float h);
	virtual ~Entity();

	virtual void draw() = 0;
};