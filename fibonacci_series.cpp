#include <iostream>
using namespace std;

int fibonacci(int);
int main()
{
    int n;
    cout << "Enter the range: ";
    cin >> n;
    cout << "Fibonacci series: \n";
    for(int i = 1; i < n; i++)
    {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
}

int fibonacci(int x)
{
    if(x==1)
    {
        return 0;
    }
    else if(x==2)
    {
        return 1;
    }
    else
    {
        return fibonacci(x-1) + fibonacci(x-2);
    }
}