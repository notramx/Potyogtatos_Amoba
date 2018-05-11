#ifndef WIDGET_HPP_INCLUDED
#define WIDGET_HPP_INCLUDED

#include "graphics.hpp"
#include <string>

class Widget
{
protected:
    int x, y, sizeX, sizeY;
    bool selected = false;
    bool isOver(int px, int py);

public:
    Widget(int _x, int _y, int _mx, int _my);
    virtual ~Widget(){}

	//virtual bool focus(int px, int py);
	//void unfocus(){selected=false;}

	virtual void draw()=0;
    virtual void eventHandler(genv::event ev)=0;
    virtual std::string WriteToFile()=0;

};

#endif // WIDGET_HPP_INCLUDED
