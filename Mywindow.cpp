#include "window.hpp"
#include "Widget.hpp"
#include "Circle_box.hpp"
#include "Mywindow.hpp"
#include "graphics.hpp"

using namespace std;
using namespace genv;



void Mywindow::eventLoop()
{

    event ev;
    gin.timer(15);

    gout.open(MAX_X, MAX_Y);

    while(gin >> ev && ev.keycode != key_escape )
    {

        if(ev.type==ev_timer)
        {
            gout << color(0,0,0) << move_to(0,0) << box(MAX_X, MAX_Y);
            for(Widget * w : widgets)
                w->draw();
            gout << refresh;
        }
        else
        {
            for(Widget * w : widgets)
            {
                w->eventHandler(ev);
            }


        }

    }

}


Mywindow::Mywindow(){


    widgets.push_back(new Circle_box(500,500,100,100,40));


}

void Mywindow::happening(string mail)
{
    if(mail=="AddLine")
    {
        AddLineToList();
        cout << "AddLine" << endl;
    }

    if(mail=="Exit")
    {
        ExitToExit();
        cout << "Exit" << endl;
    }
}
void Mywindow::AddLineToList()
{

}
void Mywindow::ExitToExit()
{

}

Mywindow::~Mywindow(){

 for(Widget *w : widgets)
        delete w;
}
