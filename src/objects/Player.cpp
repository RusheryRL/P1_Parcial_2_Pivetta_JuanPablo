#include "Player.h"
#include "raylib.h"

Player::Player() : Entity(x, y, w, h)
{
	this->currentHP = MAX_PLAYER_LIVES;
	this->currentMovements = MAX_PLAYER_MOVEMENTS;
	this->currentPoints = 0;
	isAlive = true;
	isWinner = false;

	w = PLAYER_WIDTH;
	h = PLAYER_HEIGHT;
	x = GetScreenWidth() / 2;
	y = GetScreenHeight() / 2;
}

Player::~Player()
{
}

void Player::draw()
{
	if (isAlive)
		DrawRectangle(x, y, w, h, GREEN);
	else
		DrawRectangle(x, y, w, h, WHITE);
}

void Player::movement()
{
	if (IsKeyDown(KEY_W))
	{
		y--;
	}

	if (IsKeyDown(KEY_S))
	{
		y++;
	}

	if (IsKeyDown(KEY_A))
	{
		x--;
	}

	if (IsKeyDown(KEY_D))
	{
		x++;
	}
}

int Player::getHP()
{
	return currentHP;
}

int Player::getMovements()
{
	return currentMovements;
}
