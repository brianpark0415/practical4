#include <iostream>

void string_2d_copy(std::string first[][2], std::string second[][2], int n){
    for (int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            first[i][j]=second[i][j];
        }
    }
}

