#include "string"
#include "Circle_box.hpp"
#include "graphics.hpp"
#include <math.h>

using namespace genv;
using namespace std;


void Circle_box::draw()
{
	gout << move_to(x,y) << color(0, 0, 255) << box (sizeX,sizeY);

    if (Who == 0)gout << color(255, 255,255); // feher
    if (Who == 1)gout << color(255, 0,0);      // piros
    if (Who == 2)gout << color(255, 255,0);     //sarga



	for (int i=-r; i<=r; i++) {
        for (int j=-r; j<=r; j++) {
            if (i*i + j*j < r * r) {
                gout << move_to(x+50+i, y+50+j) << dot;
            }
        }
    }

    if (selected)
    {

    if (Who == 0)gout << color(255, 255,255); // feher
    if (Who == 1)gout << color(255, 0,0);      // piros
    if (Who == 2)gout << color(255, 255,0);     //sarga

	for (int i=-r; i<=r; i++) {
        for (int j=-r; j<=r; j++) {
            if (i*i + j*j < r * r) {
                gout << move_to(x+50+i, y+50+j) << dot;
            }
        }
    }
    }
}

void Circle_box::eventHandler(event ev)
{
    if(ev.type == ev_mouse && ev.button == btn_left)
        {
            if (isOver(ev.pos_x, ev.pos_y))
            {
                selected = true;
                action();
            }
        }
}
void Circle_box::action()
{
   _parent->WhichFree(Vcolumn,Vrow,Who);
}

string Circle_box::WriteToFile()
{
return 0;
}
