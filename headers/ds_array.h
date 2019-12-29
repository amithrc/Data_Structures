//
// Created by amith on 12/17/19.
//

#ifndef DATA_STRUCTURES_DS_ARRAY_H
#define DATA_STRUCTURES_DS_ARRAY_H

#include "ds_general.h"


#define VERIFY_1D_SIZE(ptr1,ptr2) \
                        if(ptr1->size != ptr2->size) \
                        { \
                            ERROR("Array size are not equal, Cannot add the arrays!"); \
                        }\

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
void display_1d_array(ARRAY_1D *arr,BOOLEAN tidy_print);
void display_2d_array(ARRAY_2D* arr,BOOLEAN tidy_print);
ARRAY_1D* dynamic_1D(int size);
ARRAY_2D* dynamic_2D(int row,int col);
void dealloc_1d(ARRAY_1D* ptr);
void dealloc_2d(ARRAY_2D* ptr);
void add_array(ARRAY_1D *a1,ARRAY_1D *a2,ARRAY_1D* res);
void sub_array(ARRAY_1D *a1,ARRAY_1D *a2,ARRAY_1D* res);
void mul_array(ARRAY_1D *a1,ARRAY_1D *a2,ARRAY_1D* res);

#endif //DATA_STRUCTURES_DS_ARRAY_H
