#include "constants.h"
#include "raylib.h"
using namespace constants;
int main(void)
{
    // Initialization
    //-------------------------------------------------------------------------
    InitWindow(width, height, "raylib [core] example - basic window");

    SetTargetFPS(60); // Set our game to run at 60 frames-per-second
    //-------------------------------------------------------------------------

    // TEST: Load assets
    Texture2D texture = LoadTexture(ASSETS_PATH "example.png");
    // Main game loop
    while (!WindowShouldClose()) // Detect window close button or ESC key
    {
        // Update
        //---------------------------------------------------------------------
        // TODO: Update your variables here
        //---------------------------------------------------------------------

        // Draw
        //---------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(green);
        // TEST: draw asset
        DrawTexture(texture, (width - texture.width) / 2,
                    (height - texture.height) / 2, WHITE);

        DrawText("Congrats! You created your first window!", 190, 250, 20,
                 darkGreen);

        EndDrawing();
        //---------------------------------------------------------------------
    }

    // De-Initialization
    //-------------------------------------------------------------------------
    CloseWindow(); // Close window and OpenGL context
    //-------------------------------------------------------------------------

    return 0;
}
