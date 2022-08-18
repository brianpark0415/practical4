#include <iostream>
#include <stdlib.h>

extern void copy_integers(int old_array[],int new_array[],int length);

int main(int argc, char **argv){
    int array1[5] = {1,2,3,4,5};
    int array2[5];

    copy_integers(array1,array2,5);
    return 0;
}