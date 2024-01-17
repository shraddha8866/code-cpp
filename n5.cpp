#include <iostream>

using namespace std;

int main()
{   
    int arr[9]={2,2,1,3,1,2,3,2,2};
    int temp=0,count=1,i;
    int value;
    for(int i=0;i<8;i++){
        count=1;
        for(int j=i+1;j<9;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        temp=max(temp,count);
        if(count>9/2){
            value=arr[i];
        }
    }
    cout<<value;
    return 0;
}
