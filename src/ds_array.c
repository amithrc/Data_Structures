//
// Created by amith on 12/20/19.
//

#include "../headers/ds_general.h"


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


void display_2d_array(int **matrix,int row,int col,BOOLEAN tidy_print)
{
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

void display_1d_array(int *_arr,int size,BOOLEAN tidy_print)
{
    if(tidy_print == TRUE)
    {
        for(int i=0;i<size;i++)
        {
            printf("%d:%d\n",i,_arr[i]);
        }
    }else
    {
        for(int i=0;i<size;i++)
        {
            printf("%d\n", _arr[i]);
        }
    }
}