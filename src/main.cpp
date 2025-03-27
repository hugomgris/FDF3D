#include "../libs/raylib/src/raylib.h"

int main() {
    // Initialize the Raylib window
    InitWindow(1920, 1080, "Raylib Test");

    // Set target FPS
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        // Start drawing
        BeginDrawing();
        ClearBackground(BLACK);
        
        DrawText("Nponchon <3!", 910, 540, 20, RAYWHITE);

        // End drawing
        EndDrawing();
    }

    // Cleanup
    CloseWindow();
    return 0;
}
