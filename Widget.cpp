#include "Widget.hpp"
#include <iostream>

using namespace std;

Widget::Widget(int _x, int _y, int _mx, int _my):x(_x),y(_y),sizeX(_mx),sizeY(_my){}

bool Widget::isOver(int px, int py)
{
if(px >= x and x + sizeX >= px and py >= y and y + sizeY >= py)
    return true;

    return false;
}
