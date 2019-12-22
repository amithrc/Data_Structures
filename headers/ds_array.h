//
// Created by amith on 12/17/19.
//

#ifndef DATA_STRUCTURES_DS_ARRAY_H
#define DATA_STRUCTURES_DS_ARRAY_H

typedef struct arr_1d
{
    int size;
    int* _arr;
} ARRAY_1D;

typedef struct arr_2d
{
    int row;
    int col;
    int **_matrix;
}ARRAY_2D;


int* create1D(int size);
int** create2D(int row,int col);


#endif //DATA_STRUCTURES_DS_ARRAY_H
