//Write a program to reverse a number
#include<iostream>
using namespace std;
int main(){
    int n,reverse_number=0,rem;
    cout<<"enter the number to be reversed";
    cin>>n;
    while(n!=0){
        rem=n%10;
        reverse_number=(reverse_number*10)+rem;
        n=n/10;
    }
    cout<<"Reversed number is: "<<reverse_number;
    return 0;
}
