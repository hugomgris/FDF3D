#include "../includes/Game.hpp"
#include <iostream>

// Constructor
Game::Game()
    : _textPos{960, 540}, _text("Hook Testing"), _screenWidth(1920), _screenHeight(1080), _textSpeed(5), _rotationAngle(0.0f)  {
        Init();
}

// Init methods
void Game::Init() {
    InitWindow(_screenWidth, _screenHeight, "Raylib C++ Test");
    SetTargetFPS(60);
}

// Hook methods
void Game::HandleInput() {
    // Exit hook
    if (IsKeyDown(KEY_ESCAPE)) {
        Close();
        return;
    }

    // Speed control
    _textSpeed = (IsKeyDown(KEY_LEFT_SHIFT) || IsKeyDown(KEY_RIGHT_SHIFT)) ? 10 : 5;
    
    // Movement
    if (IsKeyDown(KEY_W)) _textPos.y -= _textSpeed;
    if (IsKeyDown(KEY_S)) _textPos.y += _textSpeed;
    if (IsKeyDown(KEY_A)) _textPos.x -= _textSpeed;
    if (IsKeyDown(KEY_D)) _textPos.x += _textSpeed;

    // Rotation
    if (IsKeyDown(KEY_Q)) _rotationAngle -= 2.0f;
    if (IsKeyDown(KEY_E)) _rotationAngle += 2.0f;
}

// State methods
void Game::Update() {
    HandleInput();
}

// Rendering methods
void Game::Draw() {
    BeginDrawing();
    ClearBackground(BLACK);

    // Calculate the width and height of the text
    int textWidth = MeasureText(_text, 30);
    int textHeight = 30;

    // Draw text using DrawTextPro for rotation support
    DrawTextPro(
        GetFontDefault(),  // font
        _text,             // text
        { _textPos.x - textWidth / 2.0f, _textPos.y - textHeight / 2.0f },  // position
        { (float)textWidth / 2, (float)textHeight / 2 },  // origin
        _rotationAngle,    // rotation
        30.0f,             // font size
        2.0f,              // spacing
        WHITE              // color
    );

    EndDrawing();
}

//Cleaning methods
void Game::Close() {
    CloseWindow();
}