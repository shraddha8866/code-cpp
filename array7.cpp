//Write a program to implement bubble sort
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the array size";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the elementss :";
        cin>>arr[i];
    }
    int counter=1;
    while(counter<size){
        for(int i=0;i<size-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    return 0;
}
