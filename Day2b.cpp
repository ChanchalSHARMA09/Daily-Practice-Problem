// CP Problem 2 : Sum of all even numbers up to N.

#include<iostream>
using namespace std;
int main(){
    int N,sum=0,i;
    cout<<"Enter a Number: ";
    cin>>N;
    for(i=0;i<=N;i=i+2){
        sum=sum+i;

    }
cout<<"Sum Of N even numbers is: "<<sum;

}