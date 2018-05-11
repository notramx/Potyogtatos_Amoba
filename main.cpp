#include <iostream>
#include <vector>
#include <fstream>
#include "Mywindow.hpp"


#include "graphics.hpp"
#include "math.h"
using namespace genv;
using namespace std;

int main()
{

    Mywindow * mainWindow = new Mywindow();

    mainWindow->eventLoop();

    delete mainWindow;

//gout.open(200, 200);
//
//	gout << color(200, 200, 0);
//
//
//	int x0 = 100, y0 = 100, r = 50;
//	for (int x = 50; x<150; x++) {
//		for (int y = 50; y<150; y++) {
//			if ((x0-x)*(x0-x) + (y0-y)*(y0-y) < r*r) {
//				gout << move_to(x, y) << dot;
//			}
//		}
//	}
//
//	gout << refresh;
//	event ev;
//  while(gin >> ev) {
//    }






    return 0;
}
