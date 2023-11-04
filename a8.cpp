//Write a program to print all the prime numbers under 10000
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,flag=0;
    cout<<"Prime numebers: ";
    for(i=2;i<=10000;i++){
        for(j=2;j<=sqrt(i);j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag==0){
            cout<<i<<" ";
        }
    }
    return 0;
}
