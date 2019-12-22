//
// Created by amith on 12/20/19.
//

#include "../headers/ds_general.h"

int* create1D(int size)
{
        int* _arr;
        CALLOC(_arr,int,10);
        return _arr;
}

int** create2D(int row,int col)
{
    int **matrix;
    CALLOC(matrix,int*,row) \

    for(int i=0;i<row;i++) \
    { \
        CALLOC(matrix[i],int,col) \
    }
    return matrix;
}