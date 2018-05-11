#ifndef CIRCLE_BOX_HPP_INCLUDED
#define CIRCLE_BOX_HPP_INCLUDED

#include <iostream>
#include "graphics.hpp"
#include "Widget.hpp"
#include <string>



class Circle_box : public Widget
{
   bool _checked = false;
    bool _growing;
    bool _loseing;
    std::string _szoveg;
    int i=5;
    int iL;
    std::string _text;
    int korX,korY,korZ;



public:
    Circle_box(int _x, int _y, int _mx, int _my, int __x)
        : Widget(_x, _y,_mx,_my), korZ(__x)
        {

        };
    void draw();
    void eventHandler(genv::event ev);
    std::string WriteToFile();
};

#endif // CIRCLE_BOX_HPP_INCLUDED
