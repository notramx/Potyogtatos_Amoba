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


    }

}


Mywindow::Mywindow()
{
    jm = new Jatekmester();
    jm->CreateMatrix();

    for (int i=100; i<700; i=i+100)
    {
        for(int j =100; j<800; j=j+100)

        {
            widgets.push_back(new Circle_box(this,j,i,100,100,45,2,(i/100)-1,(j/100)-1)); /// létrehozom a pályát sok Circle_box elemekbõl


            jm->Uploading((i/100)-1,(j/100)-1,0); // létrehozás után Jatekmesterbe átviszem a keletkezett értékeket
        }
    }

}

void Mywindow::WhichFree(int xxVcolumn,int xxVrow,int xxValue)
{




    int  a = jm->MatrixModf(xxVcolumn,xxVrow,xxValue); //  vissza adja a -pályát nézve- a "leg alsó" szabad helyet

    cout << "\n ";
    cout << a;


    widgets.push_back(new Circle_box(this,(xxVcolumn+1)*100,(a+1)*100,100,100,45,jm->_ellenfel(),a,xxVcolumn));// a kiválasztott elemet kéne hogy tegye priosra
    jm->Uploading(xxVcolumn,a,jm->_ellenfel());
    if(jm->Finish()==12)
    {
        std::cout << " \n";
        cout<< "VEGE";
        gout << color(0,255,0) << move_to(400,500) << text("Vege") << color(0,0,0) << box(900,750);
    }


}

Mywindow::~Mywindow()
{

    for(Widget *w : widgets)
        delete w;
}
