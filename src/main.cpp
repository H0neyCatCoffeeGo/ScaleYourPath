#include <iostream>

#include "../include/raylib.h"
#include "../include/raymath.h"

#include "../include/settings.h"
#include "../include/graph.h"
#include "../include/gui.h"

using namespace std;

void Gameloop() {
  ClearBackground(BACKGROUND);
  Grid *grid = new Grid; 
  Line *line = new Line;
  InputBox *box = new InputBox(2, 7);
  box->Draw();
  line->Draw(0, 0, 2, -6);
  grid->DrawGrid();
}

int main () {
  InitWindow(BLOCK * BOARD + BORDER * BLOCK, BLOCK * BOARD + BORDER * BLOCK, "Scale your Path");
  SetTargetFPS(60);
  
  while (!WindowShouldClose()) {
    BeginDrawing();
      Gameloop();
    EndDrawing();
  }
  
  CloseWindow();

  return 0;
}
