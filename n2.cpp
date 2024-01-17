#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"Enter a value";
    cin>>a;
    cout<<"Enter b value";
    cin>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"value of a is "<<a<<" and value of b is "<<b;
    return 0;
}