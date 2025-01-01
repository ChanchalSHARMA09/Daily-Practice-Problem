//CP PROBLEM 2 : Area Of A Rectangle Or Circle.

#include<iostream>
using namespace std;
int main(){
    int Side_A, Side_B, Radius;
    cout<<"Enter The Lenght: ";
    cin>> Side_A;
    cout<<"Enter The Breath: ";
    cin>> Side_B;
    cout<<"Area Of Rectangle: "<< Side_A*Side_B;
    cout<<"\nEnter The Radius: ";
    cin>>Radius;
    cout<<"Area Of Circle: "<< 3.14*Radius*Radius;
}