#include <raylib.h>

#define SCREEN_LEN 600

typedef struct Ball_t
{
    Vector2 pos;
    int radius;
}Ball;

int main(void)
{
    Ball ball = { {SCREEN_LEN / 2, SCREEN_LEN / 2}, 10 };
    InitWindow(SCREEN_LEN, SCREEN_LEN, "Justice");

    SetTargetFPS(60);

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        BeginDrawing();

        ClearBackground(BLACK);

        DrawCircle(ball.pos.x, ball.pos.y, ball.radius, GREEN);
        DrawRectangle(ball.pos.x - ball.radius * 3, ball.pos.y - ball.radius, 10, 20, DARKGREEN);

        EndDrawing();
    }

    CloseWindow();        // Close window and OpenGL context

    return 0;
}