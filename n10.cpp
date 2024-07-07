#include <iostream>
using namespace std;
int main()
{
   int arr[3] ={8,1,3};
   int n=3;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            for(int j=i+1;j<n-1;j++){
            
                arr[j]=arr[j+1];
                
                
            }
            n--;
            i=-1;
        }
    }
    cout<<n;
    return 0;
}
