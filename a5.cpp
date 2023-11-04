//Write a program to find if the number is Armstrong or not
#include<iostream>
using namespace std;
int main(){
    int rem,num,temp,sum=0;
    cout<<"ENter the number to be checked";
    cin>>num;
    temp=num;
    while(temp!=0){
        rem=temp%10;
        sum=sum+(rem*rem*rem);
        temp=temp/10;
    }
    if(sum==num){
        cout<<"Entered number is Armstrong";
    }
    else{
        cout<<"Entered number is not armstrong";
    }
    return 0;
}
