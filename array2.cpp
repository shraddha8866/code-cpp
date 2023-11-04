//Write a program to implement linear search in an array
#include<iostream>
using namespace std;
int main(){
    int num,size,i;
    cout<<"Enter the size of the array";
    cin>>size;
    int array[size];
    for(i=0;i<size;i++){
        cout<<"Enter the "<<i+1<<" element";
        cin>>array[i];
        
    }
    cout<<"Enter the element to be searched";
    cin>>num;
    for(i=0;i<size;i++){
        if(array[i]==num){
            cout<<"The element is present at the index value "<<i;
            break;
        }
    }
    if(i==size){
        cout<<"the element is not present in the array";
    }
    return 0;
}
