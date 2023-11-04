//Write a program to create 'n' size array entered  by the user and print the array in reverse order.
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array";
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++){
        cout<<"Enter number "<<i+1<<" :";
        cin>>array[i];
    }
    for(int j=(size-1);j>=0;j--){
        cout<<array[j];
    }
    return 0;
}
