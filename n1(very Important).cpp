#include <iostream>

using namespace std;

int main()
{
    int size,q,sum=0,product=1;
    cout<<"Enter the size of the array";
    cin>>size;
    int array[size];
    for(int i=1;i<=size;i++){
        cin>>array[i];
    }
    cout<<"Enter the Q value";
    cin>>q;
    if(q==1){
        for(int i=1;i<=size;i++){
            sum+=i;
        }
        cout<<sum;
    }
    else if(q==2){
        for(int i=1;i<=size;i++){
            product*=i;
        }
        cout<<product;
    }
    return 0;
}
