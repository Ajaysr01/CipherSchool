#include<iostream>
using namespace std;


int main()
{
    int arr[8] = {1,2,3,4,5,6,7,8};// 2 1 4 3 6 5 8 7
    int k = 7, len = sizeof(arr)/sizeof(arr[0]);
      
    int rem;

    for(int i=0;i<len;i+=k){
        int start = i, end = k+i-1;
        rem = len - (i+k);

        while( rem>=0 && start<=end ){
            swap(arr[start++], arr[end--]);
           // cout <<"inside while"<<endl;
        }
        //cout <<"value of i and rem resp: "<< i << " " << rem << endl;

    }

    for(int j=0;j<len;j++){
        cout <<arr[j] << " ";
    }



 return 0;
}