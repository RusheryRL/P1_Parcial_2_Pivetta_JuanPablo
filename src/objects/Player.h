#pragma once
#include "Entity.h"

class Player : public Entity
{
private:
	int currentHP;
	int currentMovements;
	int currentPoints;

	bool isAlive;
	bool isWinner;

public:
	Player();
	~Player();

	void draw() override; 
	void movement();

	int getHP();
	int getMovements();
};

const int MAX_PLAYER_LIVES = 3;
const int MAX_PLAYER_MOVEMENTS = 10;

const float PLAYER_WIDTH = 15.0f;
const float PLAYER_HEIGHT = 15.0f;