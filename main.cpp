#include <iostream>
#include <conio.h> //this is to control the key stroke in the console
#include "Snake.h"
#include "Food.h"
// MACROS


#define WIDTH 50
#define HEIGHT 25

using namespace std;
Snake snake({WIDTH/2,HEIGHT/2},1);
Food food;
void board()
{
    for (int i = 0; i < HEIGHT; i++)
    {
        cout << "\t\t#";
        for (int j = 0; j < WIDTH; j++)
        {
            if (i == 0 || i == HEIGHT - 1)
                cout << "#";

            else if (i == y && j == x)
                cout << "0";
            else
                cout << " ";
        }
        cout << "#\n";
    }
}
int main()
{
    while (true)
    {
        board();
      if(kbhit()){
        switch(getch()){
            case 'w': snake.direction('u'); break;
            case 'a': snake.direction('l'); break;
            case 's': snake.direction('d'); break;
            case 'd': snake.direction('r'); break;
           }
      }
      snake.move_snake();
      if(snake.eaten(food.get_pos())){
        food.gen_food();
        snake.grow();
      }


        // THIS IS FUNCTION OF WINDOWS.H AND IS USED TO REMOVE FLICKERING COMING FROM THE CLEARINING SCREEN
         //system("clr");
       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) , { 0 , 0 });
    }
    return 0;
}
