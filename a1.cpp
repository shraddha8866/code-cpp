//Write a program to find the average og 'n' numbers entered by the user
#include <iostream>
using namespace std;

int main()
{
    cout << "Program to find the Average of n numbers entered by the user\n\n";
    int n, i, temp;
    double sum = 0;
    double average = 0;
    cout << " Enter the number of integers you want to find the average of : ";
    cin >> n;
    cout << "\n\n";
    for (i = 0; i < n; i++)
    {
        cout << "Enter number" << i + 1 << " :  ";
        cin >> temp;
        sum += temp;
    }
    average = sum / n;

    cout << "\n\n The Sum of the " << n << " numbers entered by the user is : " << sum << endl;

    cout << "\n\nThe Average of the " << n << " numbers entered by the user is : " << average << endl;

    return 0;
}
