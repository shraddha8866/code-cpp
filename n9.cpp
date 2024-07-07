#include <iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int n=5;
    if(n==1){
        cout<<0;
    }
    if(arr[0]>arr[1]){
        cout<<arr[1];
    }
    if(arr[n-1]>arr[n-2]){
        cout<<n-1;
    }
    
    for(int i=1;i<n-1;i++){
        if(arr[i-1]<arr[i] && arr[i+1]<arr[i]){
            cout<<i;
        }
    }
    
    return 0;
}
