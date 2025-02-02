#ifndef SHIELD_H
#define SHIELD_H

#include <raylib.h>
#include "Ball.h"

typedef Rectangle Shield;

Shield upShieldPos(const Ball* b);

Shield downShieldPos(const Ball* b);

Shield leftShieldPos(const Ball* b);

Shield rightShieldPos(const Ball* b);


void updateShield(Shield* s, const Ball* b);
void drawShield(Shield s);

#endif // !SHIELD_H

