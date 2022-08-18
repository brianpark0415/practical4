#include <iostream>

using namespace std;

void multiples_of_seven(int *nums,int length){
    int *p1 = nums;

    for(int i=0;i<length;i++){
        if((*(p1+i))%7==0){
            std::cout << *(p1+i) << std:: endl;
        }
    }
}
