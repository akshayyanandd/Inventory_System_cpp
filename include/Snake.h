#ifndef SNAKE_H
#define SNAKE_H
#include <windows.h>


class Snake
{
private:
// this COORD is in windows.h
    COORD pos;
    int len;
    int vel;
    char direction;
public:
    
    Snake(COORD pos,int vel);
    
    void change_dir(char dir);
    void move_snake();
    COORD get_pos();
    bool eaten(COORD food);
};

#endif