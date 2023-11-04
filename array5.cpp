//Write a  program to implement binary search algorithm. Consider the input array is already sorted.
#include<iostream>
using namespace std;
int binarysearch(int array[],int n,int key){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(array[mid]==key){
           return mid;
        }
        else if(array[mid]>key){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cout<<"ENter the elements :";
        cin>>array[i];
    }
    int key;
    cout<<"Enter the key :";
    cin>>key;
    cout<<binarysearch(array,n,key)<<endl;;
    return 0;
}
