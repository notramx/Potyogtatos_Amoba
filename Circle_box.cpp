#include "string"
#include "Circle_box.hpp"
#include "graphics.hpp"
#include <math.h>

using namespace genv;
using namespace std;


void Circle_box::draw()
{
	gout << move_to(x,y) << color(0, 0, 255) << box (sizeX,sizeY);

	//int x0 = 100, y0 = 100, r = 50;
	gout << color(255, 255, 255);

	for (int i=-r; i<=r; i++) {
        for (int j=-r; j<=r; j++) {
            if (i*i + j*j < r * r) {
                gout << move_to(x+50+i, y+50+j) << dot;
            }
        }
    }

    if (selected)
    {

    if (who == 0)gout << color(255, 255,255);
    if (who == 1)gout << color(255, 0,0);
    if (who == 2)gout << color(255, 255,0);

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


            }

        }

}

string Circle_box::WriteToFile()
{
return 0;
}
