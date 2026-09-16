#include "raylib.h"
#include <iostream>
int main(){
  std::cout<<"Welcome to SquareGame1.1"<<std::endl;
  InitWindow(1300,1000,"SquareGame 1.1 (C++ Runtime)");
  // set the framerate to 60
  SetTargetFPS(60);
  // creating the position and speed
  float x=650;
  float y=450;
  float speed=5.0f;
  while (!WindowShouldClose()){
    // Controls
    if (IsKeyDown(KEY_A)) x-=speed;
    if (IsKeyDown(KEY_D)) x+=speed;
    if (IsKeyDown(KEY_W)) y-=speed;
    if (IsKeyDown(KEY_S)) y+=speed;
    if (IsKeyDown(KEY_LEFT)) x-=speed;
    if (IsKeyDown(KEY_RIGHT)) x+=speed;
    if (IsKeyDown(KEY_UP)) y-=speed;
    if (IsKeyDown(KEY_DOWN)) y+=speed;
    BeginDrawing();
    ClearBackground(RAYWHITE);
    // Draws Rectangle
    DrawRectangle(x,y,150,150,GRAY);
    // Things inside the Rectangle
    DrawText("SQUARE",x,y,35,BLACK);
    // Bunch of Texts
    DrawText("SquareGame 1.1",500,150,50,BLACK);
    DrawText("C++ Runtime",500,850,50,BLACK);
    DrawText("MBU1",15,15,40,BLACK);
    // Ends Drawing
    EndDrawing();
  }
  CloseWindow();
  return 0;
}
