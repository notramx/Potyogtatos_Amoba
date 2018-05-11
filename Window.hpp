#ifndef WINDOW_HPP_INCLUDED
#define WINDOW_HPP_INCLUDED

#include <vector>
#include "Widget.hpp"
#include <string>

class Window
{
protected:
    std::vector <Widget*> widgets;
public:
    virtual void eventLoop()=0;
    virtual void happening(std::string mail)=0;
    //virtual void  action()=0;
    void AddLineToList();
    void ExitToExit();
};

#endif // WINDOW_HPP_INCLUDED
