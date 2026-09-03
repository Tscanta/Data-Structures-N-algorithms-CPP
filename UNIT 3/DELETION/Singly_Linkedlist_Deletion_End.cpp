#include <iostream>
using namespace std;

void delete_end();
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

int main()
{
    // Creating 5 default Nodes
    Node *node1 = new Node(11);
    Node *node2 = new Node(22);
    Node *node3 = new Node(33);
    Node *node4 = new Node(44);
    Node *node5 = new Node(55);
    
    // Connecting these nodes
    head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    display();

    while(head!=NULL)
    {
        char c;
        cout << "\nPress 'E' to delete the Last Element\n";
        cin >> c;
        if(c=='E' || c=='e')
            delete_end();
        else
            cout << "INVALID INPUT\n";
    }
}

void delete_end()
{
    if(head == NULL)
    {
        cout << "The list is empty";
    }
    else if(head->next == NULL) // When theres only one element
    {
        delete head;
        head = NULL;
    }
    else
    {
        Node *temp = head;
        Node *temp2;
        while(temp->next != NULL)
        {
            temp2 = temp;
            temp = temp->next; // temp2 will keep on moviing forward
        }
        temp2->next = NULL;
        delete temp;

        cout << "UPDATED LIST: ";
        display();
    }
}

void display()
{
    Node *temp = head;
    if(head == NULL)
    {
        cout << "The list is empty";
    }
    else
    {
        while(temp!=NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        
    }
}