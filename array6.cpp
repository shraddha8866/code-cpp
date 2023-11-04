//Write a program to implement selection sort
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the  elements";
        cin>>arr[i];
    }
    for(int i=0;i<size-2;i++){
        for(int j=i+1;j<size-1;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}

