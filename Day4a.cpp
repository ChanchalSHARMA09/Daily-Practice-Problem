// Day 4 : Arrays (1D)


/*
Learning:
1) Declaration, initialization, and traversal of arrays.
2) Basic operations: Insertion, deletion, and update.
*/
 
// Practice:

// CP Problem 1 : print  an array.
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int ix=0;ix<4;ix++){
        cin>>arr[ix];
    }
    for(int ix=0;ix<4;ix++){
        cout<<arr[ix]<<" ";
    }
}


