#include "Enemy.h"
#include "raylib.h"

Enemy::Enemy() : Entity(x, y, w, h, color)
{
	isCollide = false;
	w = ENEMY_WIDTH;
	h = ENEMY_HEIGHT;
	color = RED;
}

Enemy::~Enemy()
{
}

void Enemy::draw()
{
	DrawRectangle(x, y, w, h, color);
}
