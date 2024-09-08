#include <iostream>
using namespace std;

int main(){


    //part 1
    int num;
    num = 10;

    int* ptr = &num;

    cout <<"Value of num using variable: "<< num <<endl;
    cout <<"Value of num using pointer: "<< *ptr<<endl;



    // //part 2
    int arr[5] = {1,2,3,4,5};
    int* arrPtr = arr;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout << *(arrPtr + i)<< " ";
    }
    cout << endl;


    // part 3
    int var = 5;
    int* varPtr1 = &var;
    int** varPtr2  = &varPtr1;

    cout << "using varPtr1: "<< *varPtr1 << endl;
    cout << "using varPtr2: "<< **varPtr2;

    return 0;
}