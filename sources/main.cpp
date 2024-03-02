#include "constants.h"
#include "raylib.h"
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = constants::width;
    const int screenHeight = constants::height;
    InitWindow(screenWidth, screenHeight,
               "raylib [core] example - basic window");

    SetTargetFPS(60); // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose()) // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(constants::green);

        DrawText("Congrats! You created your first window!", 190, 200, 20,
                 constants::darkGreen);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow(); // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}
