//A program to demonstrate the implementation of circular queue data structure
#include <iostream>
using namespace std;

int enqueue(int z);
int dequeue();
void display();

//Initializing the variables
int front=0; //front of the queue
int rear=0; //rear of the queue
int n;
int *queue; //size of the queue

int main()
{
    cout << "Enter the size of the queue: ";
    cin >> n;
    queue = new int[n]; //dynamically allocating memory for the queue
    int choice=0, x;
    while(choice!=4)
    {
        cout << "Press 1 to enqueue an element in the queue\n";
        cout << "Press 2 to dequeue an element from the queue\n";
        cout << "Press 3 to display the elements in the queue\n";
        cout << "Press 4 to exit\n";
        cin >> choice;
        switch(choice)
        {
            case 1:
                cout << "Enter the element to be enqueued: ";
                cin >> x;
                enqueue(x);
                break;
            case 2:
                cout << "Dequeuing an element from the queue...\n";
                dequeue();
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

int enqueue(int z)
{
    if((rear+1) % n == front) //checking if the size of the array matches with the index of the rear element
    {
        cout << "The queue is full.\n";
    }    
    else
    {
        rear = (rear+1) % n;
        queue[rear] = z; //adding the element to the queue
    }
    return 0;
}

int dequeue()
{
    if(front==rear)
    {
        cout << "The queue is empty.\n";
    }
    else
    {
        front = (front+1) % n;
        cout << "Dequeued element: " << queue[front] << endl; //displaying the dequeued element
    
    }
    return 0;
}

void display()
{
    if(front==rear)
    {
        cout << "The queue is empty.\n";
    }
    else
    {
        for(int i=(front+1)%n; i!=rear; i=(i+1)%n)
        {
            cout << queue[i] << " "; //displaying the elements in the queue
        }
        cout << queue[rear] << endl; //displaying the rear element
    }
}