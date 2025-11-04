#pragma once
#include "Entity.h"

enum class TypeOfPickUps
{
	GainPoints,
	MultPoints,
	GainHp
};

class PickUp : public Entity
{
private:
	bool isPicked;
	int points;
public:
	PickUp();
	~PickUp();

	void draw() override;
};

const int PICKUPS_IN_MATCH = 10;
const float PICKUP_WIDTH = 10.0f;
const float PICKUP_HEIGHT = 10.0f;
const int PICKUP_POINTS = 100;
