#ifndef FOOD_H
#define FOOD_H


#include <windows.h>
#include <cstdio>

#define WIDTH 50
#define HEIGHT 25

class Food
{
    private:
        COORD pos;

    public:
    Food();
        void gen_food(); //this generate food

        COORD get_pos();//this gets position of  food
};

#endif 