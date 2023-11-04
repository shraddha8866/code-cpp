//Write a program to swap 2 numbers without using the third variable
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a";
    cin>>a;
    cout<<"Enter b";
    cin>>b;
    cout<<"Before Swapping a: "<<a<<" and b: "<<b<<endl;
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<"After Swapping a: "<<a<<" and b: "<<b<<endl;
    return 0;
}
