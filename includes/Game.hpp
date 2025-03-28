#include "../libs/raylib/src/raylib.h"

class Game {
	private:
		Vector2 _textPos;
		const char* _text;
		int _screenWidth;
		int _screenHeight;
		int _textSpeed;
		float _rotationAngle;

	public:
		// Constructor
		Game();

		// Init methods
		void Init();

		// Hook methods
		void HandleInput();

		// State methods
		void Update();

		// Rendering methods
		void Draw();

		//Cleaning methods
		void Close();

};