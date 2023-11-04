//Write a program to find the average of 'n' numbers enter the by the user.
#include<iostream>
using namespace std;
int main(){
    int avg,sum=0,n,temp;
    cout<<"Enter the number of that you want to find the average";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter subject "<<i+1<<": ";
        cin>>temp;
        sum=sum+temp;
    }
    avg=sum/n;
    cout<<"Avearge of "<<n<<" subject is:"<<avg;
    return 0;
}
