#include "HUD.h"

HUD::HUD(float x, float y)
{
	this->x = x;
	this->y = y;
	playerLifes = MAX_PLAYER_LIVES;
	playerMovements = MAX_PLAYER_MOVEMENTS;
	playerPoints = 0;
}

HUD::~HUD()
{
}

void HUD::draw()
{
	DrawText("player Lives: ", x, y, 10, WHITE);
	DrawText("player Points: ", x * 2, y * 2, 10, WHITE);
	DrawText("player movements: ", x *3, y * 3, 10, WHITE);
}

int HUD::getPlayerCurrentLifes(int playerCurrentLifes)
{
	this->playerLifes = playerCurrentLifes;

	return this->playerLifes;
}

int HUD::getPlayerCurrentMovements(int playerCurrentMovements)
{
	this->playerMovements = playerCurrentMovements;

	return this->playerMovements;
}

int HUD::getPlayerCurrentPoints(int playerCurrentPoints)
{
	this->playerPoints = playerCurrentPoints;

	return this->playerMovements;
}
