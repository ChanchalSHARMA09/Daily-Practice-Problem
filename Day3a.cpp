// Day 3 : Functions and Recursion Basics

/*
Learning:
1) Functions: Declaration, definition, and calling functions.
2) Types of arguments: Pass by value and pass by reference.
3) Recursion: Basics and use cases.
*/


//Practice:

// CP Problem 1 : print sqares of first 5 natural no. using function.
#include<iostream>
using namespace std;
int squareOfNum(int a){
    int square=a*a;
     return square;
}
int main(){
  for(int i=1;i<=5;i++){
    cout<<squareOfNum(i)<<endl;
  }

}