//Write a program to swap two numbers using the third variable
#include<iostream>
using namespace std;
int main(){
    int num1,num2,temp;
    cout<<"Enter the first number";
    cin>>num1;
    cout<<"Enter the second number";
    cin>>num2;
    cout<<"Numbers before swapping num1: "<<num1<<" num2: "<<num2<<endl;
    temp=num1;
    num1=num2;
    num2=temp;
     cout<<"Numbers after swapping num1: "<<num1<<" num2: "<<num2;
    return 0;
}
