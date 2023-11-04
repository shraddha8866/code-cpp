//Write a program to find the largest element in the array
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"ENter number "<<i+1<<" :";
        cin>>arr[i];
    }
    for(int j=1;j<size;j++){
        if(arr[0]<arr[j]){
            arr[0]=arr[j];
        }
    }
    cout<<"Largest element in the array is "<<arr[0];
    return 0;
}
