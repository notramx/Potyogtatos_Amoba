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


           //widgets[1]=(new Circle_box(this,200,100,100,100,45,2,0,1));
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
                widgets.push_back(new Circle_box(this,j,i,100,100,45,0,(i/100)-1,(j/100)-1)); /// l�trehozom a p�ly�t sok Circle_box elemekb�l


                jm->Uploading((i/100)-1,(j/100)-1,0); // l�trehoz�s ut�n Jatekmesterbe �tviszem a keletkezett �rt�keket
            }
        }

}

void Mywindow::WhichFree(int xxVcolumn,int xxVrow,int xxValue)
{
    int var1=0,var2=0,a;

    a = jm->MatrixModf(xxVcolumn,xxVrow,xxValue); //  vissza adja a -p�ly�t n�zve- a "leg als�" szabad helyet

    cout << "\n ";
    cout << a;
if(xxVcolumn >= 1)
    var1 = xxVcolumn*6;
    else
    var1 = xxVcolumn;

   //widgets[0]=(new Circle_box(this,100,100,100,100,45,1,0,0)); // megadva konkr�t pozici�t megcsin�lja

    widgets[var1+xxVrow]=(new Circle_box(this,(xxVcolumn+1)*100,(xxVrow+1)*100,100,100,45,1,xxVrow,xxVcolumn)); // a kiv�lasztott elemet k�ne hogy tegye priosra

    cout << "\n";
    cout << "\n";
    cout << " erre kattintom oszlop:";
     cout << xxVcolumn;
     cout << "\n erre kattintottam sor:";
    cout << xxVrow;
     cout << " \n = ";
    cout << var1 + xxVrow ;
    cout << "\n sor koordinata:";
     cout << (xxVrow+1)*100;
    cout << "\n oszlop koordinata:";
    cout << (xxVcolumn+1)*100;

}

Mywindow::~Mywindow()
{

    for(Widget *w : widgets)
        delete w;
}
