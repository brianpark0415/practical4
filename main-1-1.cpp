#include <iostream>
#include <stdlib.h>

using namespace std;

extern void string_2d_copy(std::string first[][2], std::string second[][2], int n);

int main(int argc, char **argv){
    std::string first[3][2] = {{"a","b"},{"c","d"},{"e","f"}};
    std::string second[3][2];

    string_2d_copy(first,second,3);

    return 0;
}