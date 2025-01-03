// CP Problem 2 : Factorial using loops.

#include<iostream>
using namespace std;
int main(){
 int N;
 int num=1;
 cout<<"Enter the number ";
 cin>>N;
 for(int i=1;i<=N;i++){
 num=num*i;
 }
 cout<<num;

}