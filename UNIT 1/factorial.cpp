// FACTORIAL PROGRAM USING RECURSION
#include <iostream>
using namespace std;
int fact(int);
int main()
{
    int n;
    cout << "Enter the number to find its factorial: ";
    cin >> n;
    cout << "Factorial of " << n << " is " << fact(n);
}

int fact(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    else
    {
        return n * fact(n-1);
    }
}