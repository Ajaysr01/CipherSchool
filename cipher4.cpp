#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int tar){
    int l=0, r= size-1;
    while(l<=r){
        int mid = l + (r-l)/2;
        if(arr[mid]==tar){
            return mid+1;
        }else if(arr[mid]<tar){
            l = mid+1;
        }else {
            r = mid-1;
        }
    }

    return -1;
}


int main(){

    int arr[5] = {1,3,6,8,9};
    int tar = 9;
    
    int res = binarySearch(arr, 5, tar);

    //Part I
    if (res!=-1){
        cout <<"YES";
    }else {
        cout << "NO";
    }
    cout << endl;

    // //Part II
    cout << res;

    return 0;
    
}