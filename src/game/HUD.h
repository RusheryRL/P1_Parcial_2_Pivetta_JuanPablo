#pragma once
#include "objects/Player.h"

class HUD
{
private:
	float x;
	float y;
	int playerLifes;
	int playerMovements;
	int playerPoints;
public:
	HUD(float x, float y);
	~HUD();

	void draw();
	int getPlayerCurrentLifes(int playerCurrentLifes);
	int getPlayerCurrentMovements(int playerCurrentMovements);
	int getPlayerCurrentPoints(int playerCurrentPoints);
};

