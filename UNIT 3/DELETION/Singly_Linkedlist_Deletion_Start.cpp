// DELETION OPERATION ON THE START OF A LINKED LIST

#include <iostream>
using namespace std;

void delete_start();
void display();

class Node
{
    public: 
        int data;
        Node *next;

        Node(int x)
        {
            data = x;
            next = NULL;
        }
}; Node *head = NULL;

void delete_start()
{
    if(head == NULL)
    {
        cout << "LIST IS EMPTY.\n";
    }
    else
    {
        Node *temp = head; // Creating a temp pointer at the head
        head = head->next; // Now the head is pointing to the second node, while the temp is still pointing to the first node
        cout << temp->data << " has been deleted\n";
        delete temp;
        
        cout << "UPDATED LIST: ";
        display();
    }
}

void display()
{
    if(head == NULL)
    {
        cout << "THE LIST IS EMPTY";
    }
    else
    {
        Node* temp = head;
        while(temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
    }
    
}


int main(){

    // Creating 5 default Nodes
    Node *newnode1 = new Node(11);
    Node *newnode2 = new Node(22);
    Node *newnode3 = new Node(33);
    Node *newnode4 = new Node(44);
    Node *newnode5 = new Node(55);

    // Connecting the nodes
    head = newnode1;
    newnode1->next = newnode2;
    newnode2->next = newnode3;
    newnode3->next = newnode4;
    newnode4->next = newnode5;

    display();

    int c = 0;
    while(head != NULL) // This loop will run until the head is NULL
    {
        cout << "\nPress 1 to delete the first node:\n";
        cin >> c;
        if(c==1)
        {
            delete_start();
        }
        else
        {
            cout << "INVALID INPUT";
        }
    }
    return 0;
}