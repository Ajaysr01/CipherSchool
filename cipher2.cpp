#include <iostream>
using namespace std;

int main(){
    int num;
    num = 10;

    int* ptr = &num;

    cout <<"Value of num using variable: "<< num <<endl;
    cout <<"Value of num using pointer: "<< *ptr;

    return 0;
}