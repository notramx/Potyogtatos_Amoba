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

    return 0;
}
