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
    void happening(std::string mail);
    void AddLineToList();
    void ExitToExit();


};

#endif // MYWINDOW_HPP_INCLUDED
