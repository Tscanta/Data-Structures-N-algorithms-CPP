#include <iostream>
using namespace std;

void insert_at_start(int x);
void display();

class Node
{
    public:
        int data; //Stores the actual number.
        Node *next; //Address of the next node.

        Node(int x)
        {
            data = x;
            next = NULL;
        }
}; Node *head = NULL; //Initialy the head is NULL cuz there are no nodes.

int main()
{
    int n,x;
    cout << "How many numbers? ";
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cout << " \n";
        cout << "Enter a Number - \n";
        cin >> x;
        insert_at_start(x);
        display();
    }
    return 0;
}

void insert_at_start(int x)
{
    Node *newnode = new Node(x); //Creating the Node
    if(head == NULL) //The list is empty
    {
        head = newnode; //If empty, the newly added node automatically has the head
    }
    else{
        newnode->next = head; //The second node has the node now
        head = newnode; //Now, the newly created node has the head
    } 
}

void display()
{
    Node *temp = head;
    if(head == NULL){
        cout << "The List is Empty\n";
    }
    else{
        while(temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
    }
}