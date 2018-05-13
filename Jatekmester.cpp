#include <time.h>;
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
    int var=0;
    matrix[xVcolumn][xVrow] = xValue;

    for (int i=5; i>-1;i--)
    {

        if(matrix[xVcolumn][i]==0) // megnézi az adott oszlopban felülrõl kezdve melyik üres, ha üreset talál, visszaadja az adott sort
          {
              var=i;
              break;
          }
    }
    if(var==0) // ha végig ment eredmény nélkül a for ciklus akkor 7-t adjon vissza
        return 7;
    else
        return var;
}

