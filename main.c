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
    return 0;
}