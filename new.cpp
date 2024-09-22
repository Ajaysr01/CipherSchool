#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

// enum daysofweek {
//   sun,
//   mon, 
//   tue, 
//   wed, 
//   thr, 
//   fri, 
//   sat

// };

// int binarySearch(int arr[], int size, int tar){

//   int left = 0;
//   int right = size-1;

//   while(left<=right){
    
//     int mid = left + (right - left)/2;
//     if(arr[mid]==tar){
//       return mid;
//     }else if (arr[mid]>tar){
//       right = mid-1;
//     }else {
//       left = mid + 1;
//     }

//   }

//   return -1;

// }


// void selectionSort(int arr[], int size){


//   for(int i=0;i<size-1;i++){
//     int max = i;
//     for(int j=i+1;j<size;j++){
//       if(arr[j]>arr[max]){
//         max = j;
//       }
//     }
//     swap(arr[max], arr[i]);
//   }

// }


// void insertionSort(int arr[], int size){

//   for(int i=0;i<size;i++){
//     int min = arr[i];
//     int j = i-1;
//     while(j>=0 && arr[j]>min){
//       arr[j+1] = arr[j];
//       j--;
//     }

//     arr[j+1] = min;
//   }

// }





int main()
{

  
  string str;
  getline(cin, str);

  for(int i=0;i<str.length();i++){
    cout<<str[i]<<" ";
  }












  int x = 10;
  int& rx = x;
  rx++; // declare a reference to x
  cout << x;
  int n=1;
  // cin >> n;

  // if (n==tue){
  //   cout<<"Monday"<<endl;
  // }


  int arr[10] = {1, 3, 5, 8, 10, 15, 33, 40, 50, 71};

  //int res = binarySearch(arr, 10, 33);
 // cout << res;
//  insertionSort(arr, 10);
//  for(int i=0;i<10;i++){
//   cout << arr[i]<<" ";
//  }


 return 0;
}