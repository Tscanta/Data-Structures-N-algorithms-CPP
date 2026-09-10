#include <iostream>
using namespace std;

int enqueue(int x);
int dequeue();
void display();

int front=0, rear=0;
int queue[5];
int main() 
{
    int choice=0, x;
    while(choice!=4)
    {
        cout << "Press 1 to enqueue \n";
        cout << "Press 2 to dequeue \n";
        cin >> choice;
        switch(choice)
        {
            case 1:
                cout << "Enter the element to be enqueued: ";
                cin >> x;
                enqueue(x);
                display();
                break;
            case 2:
                cout << "Dequeuing an element from the stack...\n";
                dequeue();
                display();
                break;
            case 3:
                exit(0);
            default:
                cout << "Invalid choice\n";
        }
    }
}


int enqueue(int x)
{
    if(rear==5)
    {
        cout << "Overflow\n";
    }
    else
    {
        queue[rear]=x;
        rear++;
    }
return 0;
}
int dequeue()
{
    if(front==rear)
    {
        cout << "Underflow\n";
    }
    else
    {
        cout << queue[front] << " has been deleted\n";
        front++;
    }
return 0;
}

void display()
{
    if(front==rear)
    {
        cout << "Underflow\n";
    }
    else
    {
        for(int i=front;i<rear;i++)
        {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

