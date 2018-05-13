#include "window.hpp"
#include "Widget.hpp"
#include "Circle_box.hpp"
#include "Mywindow.hpp"
#include "graphics.hpp"
#include "Jatekmester.hpp"

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
        if(ev.type == ev_key &&ev.keycode ==key_space)
        {


            cout <<  jm->uploading() << endl;
        }

    }

}


Mywindow::Mywindow()
{
    jm = new Jatekmester();

    for (int i=100; i<700; i=i+100)
        {
        for(int j =100; j<800; j=j+100)

            {
                widgets.push_back(new Circle_box(this,j,i,100,100,45,jm->uploading(),(j/100)-1,(i/100)-1));
                cout <<(i/100)-1; // oszlop
                cout << ',';
                cout << (j/100)-1; // sor
                cout << "  ";
            }
        }



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

Mywindow::~Mywindow()
{

    for(Widget *w : widgets)
        delete w;
}
