#include "include/raylib.h"
#include "include/raymath.h"

int main(void)
{
    InitWindow(400, 224, "Template-4.0.0");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground((Color){0, 220, 180, 255});
        EndDrawing();
    }

    CloseWindow();

    return 0;
}