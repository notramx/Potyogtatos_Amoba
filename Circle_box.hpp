#ifndef CIRCLE_BOX_HPP_INCLUDED
#define CIRCLE_BOX_HPP_INCLUDED

#include <iostream>
#include "graphics.hpp"
#include "Widget.hpp"
#include "Window.hpp"
#include <string>



class Circle_box : public Widget
{
    int r,who,Vrow,Vcolumn;
    Window * _parent;


public:
    Circle_box(Window* _parent,int _x, int _y, int _mx, int _my, int _r, int _who,int _Vrow,int _Vcolumn)
        : Widget(_x, _y,_mx,_my), r(_r),who(_who),Vrow(_Vrow),Vcolumn(_Vcolumn)
        {
         this->_parent = _parent;
        };
    void draw();
    void eventHandler(genv::event ev);
    std::string WriteToFile();
    void action();
};

#endif // CIRCLE_BOX_HPP_INCLUDED
