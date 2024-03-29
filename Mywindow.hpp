#ifndef MYWINDOW_HPP_INCLUDED
#define MYWINDOW_HPP_INCLUDED

#include "Window.hpp"
#include "Jatekmester.hpp"

class Mywindow : public Window
{
    unsigned int MAX_X = 900;
    unsigned int MAX_Y = 750;

    Jatekmester *jm;
public:
    Mywindow();
    ~Mywindow();
    void eventLoop();
    void WhichFree(int xxVcolumn,int xxVrow,int xxValue);
};

#endif // MYWINDOW_HPP_INCLUDED
