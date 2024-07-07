#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[7]={1,2,1,3,4,2,3};
    int n=7;
    int k=3;
    int s=k;
    int newarr[6];
    for(int i=0;i<n-k+1;i++){
        s=k;
        for(int j=i;j<k+i-1;j++){
          for(int l=j+1;l<k+i;l++){
              if(arr[j]==arr[k]){
                  s--;
              }
          }
        //   newarr[i]=s;
        }
        newarr[i]=s;
    }
    for(int i=0;i<n;i++){
        cout<<newarr[i];
    }
    return 0;
}
