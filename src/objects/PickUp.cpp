#include "PickUp.h"
#include "raylib.h"

PickUp::PickUp(TypeOfPickUps typeOfPickUp) : Entity(x, y, w, h)
{
	isPicked = false;
	points = PICKUP_POINTS;
	w = PICKUP_WIDTH;
	h = PICKUP_HEIGHT;
	this->typeOfPickUp = typeOfPickUp;
}

PickUp::~PickUp()
{
}

void PickUp::draw()
{
	DrawRectangle(x, y, w, h, YELLOW);
}