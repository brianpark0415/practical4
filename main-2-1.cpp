#include <iostream>
#include <stdlib.h>

using namespace std;

extern void multiples_of_seven(int *nums,int length);

int main(int argc, char **argv){
    int array[5]={4,7,14,28,50};

    multiples_of_seven(array,5);
    return 0;

}