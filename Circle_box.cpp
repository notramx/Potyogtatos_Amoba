#include "string"
#include "Circle_box.hpp"
#include "graphics.hpp"
#include <math.h>

using namespace genv;
using namespace std;


void Circle_box::draw()
{
	//gout << move_to(x,y) << color(0, 0, 255) << box (sizeX,sizeY);

	//int x0 = 100, y0 = 100, r = 50;
	gout << color(255, 255, 255);
	int var = x/50;
	cout << var << endl;
	for (int xxx = 50*var; xxx<150*var; xxx++*var) {
		for (int yyy = 50*var; yyy<150*var; yyy++*var) {
			if ((x-xxx)*(x-xxx) + (y-yyy)*(y-yyy) < korZ*korZ) {
				gout << move_to(xxx, yyy) << dot;
			}
		}
	}
    if (selected)
    {
            gout << color(255, 0, 0);
        for (int xxx = 50;xxx<150; xxx++) {
		for (int yyy = 50; yyy<150; yyy++) {
			if ((sizeX-xxx)*(sizeX-xxx) + (sizeY-yyy)*(sizeY-yyy) < korZ*korZ) {
				gout << move_to(xxx, yyy) << dot;
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
            else
                selected = false;
        }

}

string Circle_box::WriteToFile()
{
return _text;
}
