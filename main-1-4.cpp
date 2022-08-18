#include <iostream>
#include <stdlib.h>

extern void copy_doubles(double *old_array,double *new_array,int length);

int main(int argc, char **argv){
    double array1[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double array2[5];

    copy_doubles(array1, array2,5);
    return 0;
}