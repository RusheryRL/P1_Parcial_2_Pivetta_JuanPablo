#pragma once
#include "Entity.h"

class Enemy : public Entity
{
private:
	bool isCollide;
public:
	Enemy();
	~Enemy();

	void draw() override;
};

const int ENEMIES_IN_MATCH = 5;
const float ENEMY_WIDTH = 15.0f;
const float ENEMY_HEIGHT = 15.0f;

