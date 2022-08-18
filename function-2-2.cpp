#include <iostream>

using namespace std;

int max_sub_sum(int *nums,int length){
    if(length==0){
        return 0;
    }
    int tempMax = nums[0];
    int curr_max = tempMax;

    for (int i=1;i<length;i++){
        curr_max = max(nums[i],curr_max+nums[i]);
        tempMax = max(tempMax,curr_max);
    }
    return tempMax;
}