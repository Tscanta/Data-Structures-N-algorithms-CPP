// Finding out the power of a number using recursion
#include <iostream>
using namespace std;

int expo(int, int);

int a,n;
int main()
{
    cout << "Enter the number: ";
    cin >> a;
    cout << "Enter the power: ";
    cin >> n;
    int e = expo(a,n);
    cout << a <<"^"<<n<<": "<<e;
}

int expo(int a, int n)
{
    if(n==0)
        return 1;
    else if(n==1)
        return a;
    else    
        return a * expo(a,n-1);
}