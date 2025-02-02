#include "Shield.h"

Shield upShieldPos(const Ball* b)
{
	return (Shield)
	{
		.x = b->pos.x - b->radius, .y = b->pos.y - b->radius * 3, .width = b->radius * 2, .height = b->radius
	};
}

Shield downShieldPos(const Ball* b)
{
	return (Shield)
	{
		.x = b->pos.x - b->radius, .y = b->pos.y + b->radius * 2, .width = b->radius * 2, .height = b->radius
	};
}

Shield leftShieldPos(const Ball* b)
{
	return (Shield)
	{
		.x = b->pos.x - b->radius * 3, .y = b->pos.y - b->radius, .width = b->radius, .height = b->radius * 2
	};
}

Shield rightShieldPos(const Ball* b)
{
	return (Shield)
	{
		.x = b->pos.x + b->radius * 2, .y = b->pos.y - b->radius, .width = b->radius, .height = b->radius * 2
	};
}

void updateShield(Shield* s, const Ball* b)
{
	switch (GetKeyPressed())
	{
	case KEY_UP:
		*s = upShieldPos(b);
		break;
	case KEY_DOWN:
		*s = downShieldPos(b);
		break;
	case KEY_LEFT:
		*s = leftShieldPos(b);
		break;
	case KEY_RIGHT:
		*s = rightShieldPos(b);
		break;
	}
}

void drawShield(Shield s)
{
	DrawRectangleRec(s, DARKGREEN);
}
