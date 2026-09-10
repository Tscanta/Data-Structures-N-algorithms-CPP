#include <iostream>
using namespace std;

int push(int x);
int pop();
void display();

int top=0;
const int n=5;
int stack[n];
int main() 
{
    int choice=0, x;
    while(choice!=4)
    {
        cout << "Press 1 to push an element in the stack\n";
        cout << "Press 2 to pop an element from the stack\n";
        cin >> choice;
        switch(choice)
        {
            case 1:
                cout << "Enter the element to be pushed in the stack: ";
                cin >> x;
                push(x);
                display();
                break;
            case 2:
                cout << "Popping an element from the stack...\n";
                pop();
                display();
                break;
            case 3:
                exit(0);
            default:
                cout << "Invalid choice\n";
        }
    }
}


int push(int x)
{
    if(top==n)
    {
        cout << "Overflow\n";
    }
    else
    {
        stack[top]=x;
        top++;
    }
return 0;
}
int pop()
{
    if(top==0)
    {
        cout << "Underflow\n";
    }
    else
    {
        top--;
    }
return 0;
}

void display()
{
    if(top==0)
    {
        cout << "Underflow\n";
    }
    else
    {
        for(int i=top-1;i>=0;i--)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

