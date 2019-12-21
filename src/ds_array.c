//
// Created by amith on 12/20/19.
//

#include "../headers/ds_general.h"

int* create1D(int size)
{
//    int* _arr = (int *) malloc(size * sizeof(int));
//    if(_arr == NULL)
//    {
//        ERROR("Error Allocating memory!!");
//    }
//    return _arr;

        int* _arr;
        ALLOC(_arr,int,10);

        return _arr;

}