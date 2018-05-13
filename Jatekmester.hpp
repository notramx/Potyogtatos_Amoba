#ifndef JATEKMESTER_HPP_INCLUDED
#define JATEKMESTER_HPP_INCLUDED
#include <vector>

class Jatekmester
{
    std::vector<std::vector<int>> matrix;
    bool ellenfel;
public:

    void CreateMatrix();
    void Uploading(int xVcolumn,int xVrow,int xValue);
    int MatrixModf(int xVcolumn,int xVrow,int xValue);
    bool _ellenfel()
    {
        return ellenfel;
    }
    int Finish();

};

#endif // JATEKMESTER_HPP_INCLUDED
