#include "headers/ds_general.h"
#include "headers/ds_array.h"

int main() {

    ARRAY_1D *a1 = dynamic_1D(10);
    ARRAY_1D *a2 = dynamic_1D(10);

    for(int i=0;i < 10;i++)
    {
        a1->_arr[i] = 10;
        a2->_arr[i] = 10;
    }

    ARRAY_1D res = {10,create1D(10)};

    add_array(a1,a2,&res);

    display_1d_array(&res,FALSE);
    DEALLOC(res._arr);
    return 0;
}