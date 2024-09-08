#include<iostream>
#include<string>
#include <climits>
using namespace std;

bool isPalindrome(const string &str){
    int len = str.length();

    int l = 0;
    int r = len - 1;

    while(l<=r){
        while(!isalpha(str[l])){
            l++;
        }

        while(!isalpha(str[r])){
            r--;
        }

        if(tolower(str[l]) != tolower(str[r])){
            return false;
        }
        
        l++;
        r--;
    }

    return true;
}



int findMax(const int arr[], int size){
    int max = INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    return max;
}


int main(){
    //part I;
    int arr1[5] = {1,3,9,5,2};
    cout << "Maximum element is : "<< findMax(arr1,5) <<endl;

    int arr2[7] = {1,4,78,31,16,0,9};
    cout << "Maximum element is : "<< findMax(arr2,7) <<endl;

    int arr3[3] = {8,4,11};
    cout << "Maximum element is : "<< findMax(arr3,3) <<endl;


    //part II
    string str1 = "A man, a plan, a canal, Panama";
    if(isPalindrome(str1)){
        cout <<"Palindrome"<<endl;
    }else {
        cout <<"Isn't a Palindrome";
    }

    string str2 = "The Man, the myth, the legend";
    if(isPalindrome(str2)){
        cout <<"Palindrome";
    }else {
        cout <<"Isn't a Palindrome";
    }


    return 0;
}