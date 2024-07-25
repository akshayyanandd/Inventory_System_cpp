#include "Snake.h"

Snake::Snake(COORD pos,int vel){
    this->pos = pos;
    this->vel = vel;
    len=1;
    direction='n';
}
void Snake::change_dir(char dir) {direction=dir};

void Snake::move_snake()
{
    switch(direction){
        case 'u':pos.Y-=vel;break;
        case 'd':pos.Y+=vel;break;
        case 'l':pos.X-=vel;break;
        case 'r':pos.X+=vel;break;
    }
    
}

COORD Snake::get_pos(){return pos;}

bool Snake::eaten(COORD food)
{
    if(pos.X == food.X && pos.Y == food.Y) return true;
    return false;
}
