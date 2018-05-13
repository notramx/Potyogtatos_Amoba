#ifndef WINDOW_HPP_INCLUDED
#define WINDOW_HPP_INCLUDED

#include <vector>
#include "Widget.hpp"
#include <string>
#include "Jatekmester.hpp"


class Window
{
protected:
    std::vector <Widget*> widgets;

public:
    virtual void eventLoop()=0;
    virtual void WhichFree(int xxVcolumn,int xxVrow,int xxValue)=0;
};

#endif // WINDOW_HPP_INCLUDED
