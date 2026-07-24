//STACK PROGRAM DSC

#include <iostream>
using namespace std;

int push(int x);
int pop();
void display();

int top=0;
const int n = 10;
int stack[n];

int main()
{
    int e;
    cout << "The size of the array is: "<<n;
    cout << "Enter the elements in the array: ";
    cin >> e;
    int push(e);
    
}

int push(int x)
{
    if(top==n)
        cout << "The stack is full (overflow)\n";
    else    
        stack[top] = x;
        top++;
}

int pop()
{
    if(top==0)
        cout << "The stack is empty (underflow)\n";
    else    
        top--;
}

void display()
{
    if(top==0)
        cout << "The stack is empty\n";
    else    
        for(int i=top-1; i>=0; i--)
        {
            cout << stack[i];
        }
}