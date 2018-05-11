#ifndef MYWINDOW_HPP_INCLUDED
#define MYWINDOW_HPP_INCLUDED

#include "Window.hpp"

class Mywindow : public Window
{
     unsigned int MAX_X = 1000;
     unsigned int MAX_Y = 1000;

public:
    Mywindow();
    ~Mywindow();
    void eventLoop();
    void happening(std::string mail);
    void AddLineToList();
    void ExitToExit();


};

#endif // MYWINDOW_HPP_INCLUDED
