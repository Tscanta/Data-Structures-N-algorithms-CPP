#include <iostream>
using namespace std;

void delete_pos(int pos);
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
        int pos;
        cout << "\nEnter the position to delete the element at that position\n";
        cin >> pos;
        delete_pos(pos);
        display();
    }
}

void delete_pos(int pos)
{

    // Checking whether the list is empty or not
    if(head==NULL)
    {
        cout << "The list is empty\n";
        return;
    }

    // Checking if the position is less than one or not
    if(pos < 1)
    {
        cout << "INVALID POSITION\n";
        return;
    }
    
    Node *temp = head; // Creating a temp var & pointing it to head AKA the first element.
    Node *newtemp; // Creating another temp var


    // Checking when the position is 1
    if (pos == 1)
    {
        temp = head; // Temp is pointing to head AKA the first node.
        head = head->next; // Now, head is pointing to the second node.
        delete temp; // Since, temp is still pointing to the first node, we delete temp.
        return;
    }

    int i = 1;

    while(i<pos-1 && temp!=NULL)
    {
        temp = temp->next;
        i++;
    }

    if(temp==NULL || temp->next==NULL)
    {
        cout << "INVALID POSITION\n";
        return;
    }

    newtemp = temp->next;
    temp->next = newtemp->next;
    delete newtemp;
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