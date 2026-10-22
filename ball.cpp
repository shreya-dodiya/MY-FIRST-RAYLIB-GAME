#include<raylib.h>
int main(){
    int ballX=400;
    int ballY=400;
    //colors are represented using a struct (Color), which has 4 components
    // Color color = {red,green,blue,alpha(transparency of color)} -> value of each component range from 0(absence of color) to 255(full intensity of color)
    // eg= for red color: Color red(color var name) = {255,0,0,255(completely opaque here)}
    Color green={20,160,133,255};//mixing colors to create green
  
    // hard-coded window size
    InitWindow(800,800, "My first raylib game");//width and height of game window in pixel and title of the game window
  
    SetTargetFPS(60);//how fast the game should run(before the game loop). takes an integer as an argument and that integer = number of frames per second(60 times per sec)
    //if we don't define a frame rate for our game, the computer will try to run our game as fast as it can

    //game loop
    while(WindowShouldClose()==false){//if the escape key on the keyboard is pressed or if the close icon of the window is pressed -> (returns true). so, if it returns true, the game loop ends and the window is destroyed
         
        //1. event handling
        //takes a key constant as input
         if(IsKeyDown(KEY_RIGHT)){//checks if the user has pressed the right arrow key on his keyboard
            ballX = ballX+3;
         }
         if(IsKeyDown(KEY_LEFT)){//for left
            ballX = ballX-3;
         }
         if(IsKeyDown(KEY_UP)){//for up
            ballY = ballY-3;
         }
         if(IsKeyDown(KEY_DOWN)){//for down
             ballY = ballY+3;
         }
           
         if (ballX < 20){//if the ball tries to leave the left-edge(x=0) window so , set it back to 20
            ballX = 20;
         }
          if (ballX > 780){//if the ball tries to leave the right-edge(x=800) window so , set it back to 800-20 = 780
            ballX = 780;
         }
             if (ballY < 20){//if the ball tries to leave the top-edge(y=0) window so , set it back to 20
                ballY = 20;
          }
          if (ballY > 780) {//if the ball tries to leave the right-edge(y=800) window so , set it back to 800-20 = 780
            ballY = 780;
        }
    
        //2. updating positions
        

        //3.drawing 
        BeginDrawing();//creates a blank canvas so we can draw our game objects
      
        ClearBackground(green);//without it, the game execution will leave a trace. Here, CLEAR THE GAME WINDOW IN EVERY ITERATION OF THE GAME LOOP BEFORE DRAWING THE BALL IN ITS NEW POSITION
      
        DrawCircle(ballX,ballY,20,WHITE);//x and y coordinates of the center circle we want to draw, the radius of the circle , its color(in capital)
      
        EndDrawing();//ends the canvas drawing
        }
  
    CloseWindow();//each time we create a window we have to close it before closing the game
    return 0;
    }
    
