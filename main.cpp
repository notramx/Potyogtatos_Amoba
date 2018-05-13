
#include "Mywindow.hpp"
#include "Circle_box.hpp"

using namespace genv;
using namespace std;

int main()
{

    Mywindow * mainWindow = new Mywindow();

    mainWindow->eventLoop();

    delete mainWindow;

    return 0;
}
