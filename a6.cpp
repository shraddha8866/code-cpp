//Write a program to find if the number is palindrome or not.
#include<iostream>
using namespace std;
int main(){
    int rem,rev,temp,num;
    cout<<"ENner the number to check whether it's palindrome or not";
    cin>>num;
    temp=num;
    while(temp>0){
        rem=temp%10;
        rev=(rev*10)+rem;
        temp=temp/10;
    }
    if(rev==num){
        cout<<"Entered number is palindrome";
    }
    else{
        cout<<"Entered number is not palindrome"
    }
}
