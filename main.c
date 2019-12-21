#include "headers/ds_general.h"

int main() {


    typedef struct arr
    {
        int size;
        int* _arr;
    }ARR;


    int *_arr = create1D(10);

    ARR a;

    a.size = 10;
    a._arr = _arr;


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
    printf("Size= %d \n",size);
    return 0;
}