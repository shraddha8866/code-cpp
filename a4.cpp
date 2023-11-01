//Write a program to find if the number is prime or not
#include<bits/stdc++.h>
using namespace std;

int main () 
{
  int n, flag = 0;
  
  cout << "Enter the number to check if it is prime or not: ";
  cin >> n;
  
  for (int i = 2; i <= sqrt (n); i++)
    {
      if (n % i == 0){
	    flag = 1;
	    break;
	  }
    }
  
  if (flag == 0)
    cout << "The given number is prime";
  else 
   cout << "The given number is not prime";
  
  return 0;
}
