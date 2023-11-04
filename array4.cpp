//Write a program to find the middle element of an array
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array :";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter number "<<i+1<<" : ";
        cin>>arr[i];
    }
    if(size%2==0){
        int middle_Ele1=arr[(size/2)-1];
        int middle_Ele2=arr[size/2];
        cout<<"Middle element of the array is "<<middle_Ele1<<" and "<<middle_Ele2;
    }
    else{
        int middle_Element=arr[size/2];
        cout<<"Middle element of the array is "<<middle_Element;
    }
    return 0;
}
