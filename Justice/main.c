#include <raylib.h>
#include "Ball.h"
#include "Shield.h"

#define SCREEN_LEN 600

int main(void)
{
    Ball ball = { {SCREEN_LEN / 2, SCREEN_LEN / 2}, 10 };
    Shield shield = leftShieldPos(&ball);
    InitWindow(SCREEN_LEN, SCREEN_LEN, "Justice");

    SetTargetFPS(60);

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        updateShield(&shield, &ball);

        BeginDrawing();

        ClearBackground(BLACK);

        DrawCircle(ball.pos.x, ball.pos.y, ball.radius, GREEN);
        drawShield(shield);

        EndDrawing();
    }

    CloseWindow();        // Close window and OpenGL context

    return 0;
}