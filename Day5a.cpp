// Day 5 : Strings

/*
Learning:
1) Strings in C++ (std::string): Input, output, length, and concatenation.
2) Common string functions: substr, find, compare.
*/

// Practice:

// CP Problem 1 : linear search.

#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,4,6,9,0};
  int key=9;
  int end=-1;
  for(int i=0;i<5;i++){
  if(arr[i]==key){
    end=arr[i];
    break;
}
  }
  cout<<end;

}

