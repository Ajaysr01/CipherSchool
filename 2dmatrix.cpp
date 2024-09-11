#include<iostream>
using namespace std;


int main()
{
    int arr1[3][3];
    int count = 1;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr1[i][j]= count++;
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                cout << arr1[i][j]<<" ";
        }
        cout <<endl;
    }
    cout <<endl;
    cout <<endl;


    int arr2[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr2[i][j]= count++;
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                cout << arr2[i][j]<<" ";
        }
        cout <<endl;
    }
    cout <<endl;
    cout <<endl;





    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr1[i][j]+=arr2[i][j];
        }
    }


    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                cout << arr1[i][j]<<" ";
        }
        cout <<endl;
    }
    cout <<endl;
    cout <<endl;

    
    // for(int i=0;i<3;i++){
    //     for(int j=i+1;j<3;j++){
    //             swap(arr[i][j],arr[j][i]);
    //     }
    // }

    

 return 0;
}