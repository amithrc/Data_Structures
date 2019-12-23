//
// Created by amith on 12/17/19.
//

#ifndef DATA_STRUCTURES_DS_ARRAY_H
#define DATA_STRUCTURES_DS_ARRAY_H

#include "ds_general.h"

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
void display_1d_array(int *_arr,int size,BOOLEAN tidy_print);
void display_2d_array(int **matrix,int row,int col,BOOLEAN tidy_print);

#endif //DATA_STRUCTURES_DS_ARRAY_H
