//  # program to concatenate two given strings
#include <iostream>
#include <string>
using namespace std;

int stringLength(const string &str){
   return str.size();
}

int main(){
   string str1 = "Hello world";
   cout << "Length of given string is : "<< stringLength(str1)<<endl;
   
   string str2 = "New String";
   cout << "Length of given string is : "<< stringLength(str2)<<endl;

   return 0;
}
