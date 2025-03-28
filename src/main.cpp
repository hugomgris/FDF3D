#include "../libs/raylib/src/raylib.h"
#include "../includes/Game.hpp"

//! Hooks test
int main() {
	Game game;

	while (!WindowShouldClose()) {
		game.Update();
		game.Draw();
	}

	game.Close();
	return (0);
}

//! Double buffer text
/*int main() {
	// Initialize the Raylib window
	InitWindow(1920, 1080, "Raylib Test");

	// Set target FPS
	SetTargetFPS(60);

	RenderTexture2D sceneBuffer = LoadRenderTexture(1920, 1080);
	RenderTexture2D uiBuffer = LoadRenderTexture(1920 / 5, 1080);

	while (!WindowShouldClose()) {
		// Render Scene
		BeginTextureMode(sceneBuffer);
		ClearBackground(BLACK);
		DrawText("3D Scene test!!", 
                 (sceneBuffer.texture.width - MeasureText("3D Scene test!!", 30)) / 2, 
                 (sceneBuffer.texture.height - 30) / 2, 
                 30, 
                 WHITE);
		EndTextureMode();

		// Render UI
		BeginTextureMode(uiBuffer);
		ClearBackground((Color){0, 0, 0, 0});
		DrawRectangleRec((Rectangle){0, 0, (float)uiBuffer.texture.width, (float)uiBuffer.texture.height}, 
                         (Color){255, 0, 0, 128}); // RED with 50% transparency
        DrawText("UI LAYER", 
                 (uiBuffer.texture.width - MeasureText("UI LAYER", 30)) / 2, 
                 (uiBuffer.texture.height - 30) / 2, 
                 30, 
                 BLACK);
		EndTextureMode();

		// Render composition
		BeginDrawing();
		ClearBackground(BLACK);

		 // Draw Scene (Full Screen)
        DrawTextureRec(sceneBuffer.texture, 
                       (Rectangle){ 0, 0, (float)sceneBuffer.texture.width, -(float)sceneBuffer.texture.height }, 
                       (Vector2){ 0, 0 }, 
                       WHITE);

        // Draw UI Buffer (Left 20% of screen)
        DrawTextureRec(uiBuffer.texture, 
                       (Rectangle){ 0, 0, (float)uiBuffer.texture.width, -(float)uiBuffer.texture.height }, 
                       (Vector2){ 0, 0 }, 
                       WHITE);

		EndDrawing();
	}

	// Cleanup
	UnloadRenderTexture(sceneBuffer);
	UnloadRenderTexture(uiBuffer);
	CloseWindow();
	return 0;
}*/