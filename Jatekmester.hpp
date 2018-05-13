#ifndef JATEKMESTER_HPP_INCLUDED
#define JATEKMESTER_HPP_INCLUDED
#include <vector>

class Jatekmester
{
    std::vector<std::vector<int>> matrix;
public:

    int uploading();
    void MatrixUploading(int Vcolumn,int Vrow,int Value);

};

#endif // JATEKMESTER_HPP_INCLUDED
