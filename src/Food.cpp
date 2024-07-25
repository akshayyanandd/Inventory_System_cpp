#include "Food.h"
void Food::gen_food(){
    pos.X=(rand()% WIDTH-3)+1;
    pos.Y=(rand()% HEIGHT -3)+1;
    // rand is random function in windows.h in Food.h

}
COORD Food::get_pos(){return pos;}