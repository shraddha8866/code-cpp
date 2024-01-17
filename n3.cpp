#include <iostream>
using namespace std;
int main()
{
int size;
cout<<"Enter the size: ";
cin>>size;
int ARR[size];
int COPY_ARR[size];
for(int i=0;i<size;i++){
    cout<<"enter values";
    cin>>ARR[i];
}
for(int i=0;i<size;i++){
    COPY_ARR[i]=ARR[i];
}
for(int i=size-1;i>=0;i--){
   cout<<COPY_ARR[i];
}
return 0;
}
