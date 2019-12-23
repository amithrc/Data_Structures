#include "headers/ds_general.h"
#include "headers/ds_array.h"

int main() {

    ARRAY_1D a = {10,create1D(10)};

    for(int i=0;i < 10;i++)
    {
        a._arr[i] = i*2;
    }

    for(int i=0;i<10;i++)
    {
        printf("%d\n",a._arr[i]);
    }

    DEALLOC(a._arr);

    int aa[]={1,2,3,4,5,6,7,8,9,10,11,12};
    int size = ARRAY_SIZE(aa);
            display_1d_array(aa,size,FALSE);
    printf("Size= %d \n",size);

    ARRAY_2D a2 = {10,10,create2D(10,10)};

    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            *(*(a2._matrix+i)+j) = 10;
        }
    }

//    for(int i=0;i<10;i++)
//    {
//        for(int j=0;j<10;j++)
//        {
//            printf("%d:%d %d\t",i,j,a2._matrix[i][j]);
//
//        }
//        printf("\n");
//    }

    display_2d_array(a2._matrix,a2.row,a2.col,FALSE);

    DEALLOC_2D(a2._matrix,a2.row);
    return 0;
}