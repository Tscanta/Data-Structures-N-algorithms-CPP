//Implementation of stack data structure
#include <iostream>
using namespace std;

int push(int x);
int pop();
void display();

int top=0;
const int n=10;
int stack[n];

int main()
{
    int choice=0, x;
    while(choice!=4)
    {
        cout << "Press 1 to push an element in the stack\n";
        cout << "Press 2 to pop an element from the stack\n";
        cout << "Press 3 to display the elements in the stack\n";
        cout << "Press 4 to exit\n";
        cin >> choice;
        switch(choice)
        {
            case 1:
                cout << "Enter the element to be pushed in the stack: ";
                cin >> x;
                push(x);
                break;
            case 2:
                cout << "Popping an element from the stack...\n";
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                cout << "Invalid choice\n";
        }
    }
}

int push(int x)
{
    if(top==n) //checking if the stack is full. top matches with the size of the stack.
    {
        cout << "The stack is full (overflow)\n";
    }
    else
    {
        stack[top] = x; //adding the element to the stack
        top++; 
    }
    return 0;
}

int pop()
{
    if(top==0) //if top is zero, then the stack is empty.
    {
        cout << "The stack is empty (underflow)\n";
    }
    else
    {
        top--; //removing the last element from the stack by decrementing the top.
    }    
    return 0;
}

void display()
{
    if(top==0)
    {
        cout << "The stack is empty\n";
    }
    else    
    {
        for(int i=top-1; i>=0; i--) //printing the elements of the stack.
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}