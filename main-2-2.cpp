#include <iostream>
#include <stdlib.h>

using namespace std;

extern int max_sub_sum(int *nums,int length);

int main(int argc, char **argv){
    int array[10] = {-1,3,7,-2,4,9,-6,1,-8,5};
    cout << max_sub_sum(array,10) << endl;

    return 0;
}