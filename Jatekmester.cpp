#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "Jatekmester.hpp"
#include <vector>
#include <iostream>

void Jatekmester::CreateMatrix()
{
    for(int i=0 ; i<7 ; i++)
    {
        std::vector <int> v;
        for(int j=0; j<6 ; j++)
        {
            v.push_back(0);

        }
        matrix.push_back(v);
    }
}

void Jatekmester::Uploading(int xVcolumn,int xVrow,int xValue)
{
    matrix[xVcolumn][xVrow] = xValue;
}

int Jatekmester::MatrixModf(int xVcolumn,int xVrow,int xValue)
{
    ellenfel=!ellenfel;
    std::cout << " \n";
    std::cout << ellenfel ;
    int var=0;
    matrix[xVcolumn][xVrow] = xValue;
    int i=5;
    while (i>-1)
    {

        if(matrix[xVcolumn][i]==0) // megnézi az adott oszlopban felülrõl kezdve melyik üres, ha üreset talál, visszaadja az adott sort
        {

            var=i;
            break;
        }
        i--;
    }
    if(var==0) // ha végig ment eredmény nélkül a for ciklus akkor 7-t adjon vissza
        return 7;
    else
        return var;
}
int Jatekmester::Finish()
{
    int a;
    for (int k=0; k<7; k++)
    {
        for(int l=0; l<6; l++)
        {
            if(matrix[k][l]==1)
                if(matrix[k][l+1]==1)
                    if(matrix[k][l+2]==1)
                        if(matrix[k][l+3]==1)
                            a = 12;

        }
    }
    for (int k=0; k<7; k++)
    {
        for(int l=0; l<6; l++)
        {
            if(matrix[k][l]==1)
                if(matrix[k+1][l]==1)
                    if(matrix[k+2][l]==1)
                        if(matrix[k+3][l]==1)
                            a = 12;

        }
    }

    return a;
}
