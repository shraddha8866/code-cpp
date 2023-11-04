//Write a program to implement insertion sort
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"ENter the size of the array";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the elements";
        cin>>arr[i];
    }
    for(int i=1;i<size;i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    return 0;
}
