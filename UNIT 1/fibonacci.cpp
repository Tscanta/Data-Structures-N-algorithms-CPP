// Fibonacci using Recursion
#include <iostream>
using namespace std;
int fib(int);
int main()
{
    int n;
    cout << "Enter the position in the Fibonacci Sequence: ";
    cin >> n;
    cout << "The Fibonacci Number on position " << n << " is " << fib(n);
}

int fib(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else
    {
        return fib(n-1) + fib(n-2);
    }
}