#ifndef JATEKMESTER_HPP_INCLUDED
#define JATEKMESTER_HPP_INCLUDED
#include <vector>

class Jatekmester
{
    std::vector<std::vector<int>> matrix;
public:

    void CreateMatrix();
    void Uploading(int xVcolumn,int xVrow,int xValue);
    int MatrixModf(int xVcolumn,int xVrow,int xValue);

};

#endif // JATEKMESTER_HPP_INCLUDED
