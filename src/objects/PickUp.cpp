#include "PickUp.h"
#include "raylib.h"

PickUp::PickUp() : Entity(x, y, w, h)
{
	isPicked = false;
	points = PICKUP_POINTS;
	w = PICKUP_WIDTH;
	h = PICKUP_HEIGHT;
}

PickUp::~PickUp()
{
}

void PickUp::draw()
{
	DrawRectangle(x, y, w, h, YELLOW);
}