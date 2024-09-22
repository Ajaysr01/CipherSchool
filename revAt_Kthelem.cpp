#include<iostream>
using namespace std;

int& func(int& n){

    int& count=n;
    return count;
}

/*

 In order to use heap memory, we always need to use the "new" keyword. it doesn't take var_names, but only their
 datatype and size too in case of arrays. 
 It always gives the address of the assigned memory.
 
 int* value = new int;
 char* ch = new char;


 variable size array in heap memory
    int *arr = new int[size];

    this is useful when we want to create an array on the runtime, using the user given size for the array. 
    it is because, heap is dynamic memory and it is larger than static memory or stack which is used to assign
    memory at the runtime






*/




int main()
{

    int n = 5;
    int& ref = func(n);
    cout << ++ref;
    cout << n;


    
    // int arr[8] = {1,2,3,4,5,6,7,8};// 2 1 4 3 6 5 8 7
    // int k = 7, len = sizeof(arr)/sizeof(arr[0]);
      
    // int rem;

    // for(int i=0;i<len;i+=k){
    //     int start = i, end = k+i-1;
    //     rem = len - (i+k);

    //     while( rem>=0 && start<=end ){
    //         swap(arr[start++], arr[end--]);
    //        // cout <<"inside while"<<endl;
    //     }
    //     //cout <<"value of i and rem resp: "<< i << " " << rem << endl;

    // }

    // for(int j=0;j<len;j++){
    //     cout <<arr[j] << " ";
    // }



 return 0;
}