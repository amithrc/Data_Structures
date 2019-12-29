//
// Created by amith on 12/20/19.
//

#include "../headers/ds_general.h"
#include "../headers/ds_array.h"


/*Helper functions for the array*/
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


void display_2d_array(ARRAY_2D* arr,BOOLEAN tidy_print)
{
        int **matrix,row, col;
        matrix=arr->_matrix;
        row = arr->row;
        col = arr->col;

        if(tidy_print == TRUE)
        {
            for(int i=0;i<row;i++)
            {
                for(int j=0;j<col;j++)
                {
                    printf("%d:%d %d\t",i,j,matrix[i][j]);

                }
                printf("\n");
            }
        }else
        {
            for(int i=0;i<row;i++)
            {
                for(int j=0;j<col;j++)
                {
                    printf("%d\t",matrix[i][j]);
                }
                printf("\n");
            }
        }
}

void display_1d_array(ARRAY_1D *arr,BOOLEAN tidy_print)
{
    int *ar, size;
    ar = arr->_arr;
    size= arr->size;
    if(tidy_print == TRUE)
    {
        for(int i=0;i<size;i++)
        {
            printf("%d:%d\n",i,ar[i]);
        }
    }else
    {
        for(int i=0;i<size;i++)
        {
            printf("%d\n", ar[i]);
        }
    }
}

ARRAY_1D* dynamic_1D(int size)
{
    ARRAY_1D *arr;
    ALLOC(arr,ARRAY_1D,sizeof(ARRAY_1D));
    arr->_arr = create1D(size);
    arr->size = size;
    return arr;
}

ARRAY_2D* dynamic_2D(int row,int col)
{
    ARRAY_2D *arr;
    ALLOC(arr,ARRAY_2D,sizeof(ARRAY_2D));
    arr->_matrix = create2D(row,col);
    arr->row=row;
    arr->col=col;
    return arr;
}

void dealloc_1d(ARRAY_1D* ptr)
{
    DEALLOC(ptr->_arr);
    free(ptr);
}

void dealloc_2d(ARRAY_2D* ptr)
{
    DEALLOC_2D(ptr->_matrix,ptr->row);
    free(ptr);
}

void add_array(ARRAY_1D *a1,ARRAY_1D *a2,ARRAY_1D* res)
{
    VERIFY_1D_SIZE(a1,a2);
    int size = a1->size;

    for(int i=0;i< size;i++)
    {
        res->_arr[i] = a1->_arr[i] + a2->_arr[i];
    }
}

void sub_array(ARRAY_1D *a1,ARRAY_1D *a2,ARRAY_1D* res)
{
    VERIFY_1D_SIZE(a1,a2);
    int size = a1->size;

    for(int i=0;i< size;i++)
    {
        res->_arr[i] = a1->_arr[i] - a2->_arr[i];
    }
}

void mul_array(ARRAY_1D *a1,ARRAY_1D *a2,ARRAY_1D* res)
{
    VERIFY_1D_SIZE(a1,a2);
    int size = a1->size;

    for(int i=0;i< size;i++)
    {
        res->_arr[i] = a1->_arr[i] * a2->_arr[i];
    }
}