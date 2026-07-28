//A program to demonstrate the implementation of queue data structure
#include <iostream>
using namespace std;

int enqueue(int x);
int dequeue();
void display();

//Initializing the variables
int front=0; //front of the queue
int rear=0; //rear of the queue
int queue[10];

int main()
{
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
    if(rear==z) //checking if the size of the array matches with the index of the rear element
        cout << "The queue is full.\n";
    else
        queue[rear] = z; //adding the element to the queue
        rear++; //going to the next element
    
    return 0;
}

int dequeue()
{
    if(front==rear)
        cout << "The queue is empty.\n";
    else
        cout << "The element " << queue[front] << " has been dequeued from the queue.\n";
        front++;
    return 0;
}

void display()
{
    if(front==rear)
        cout << "The queue is empty.\n";
    else
        cout << "The array is: \n";
        for(int i=front; i<rear; i++) //printing all the elements of the array
        {
            cout<<queue[i] << endl;
        }        
}