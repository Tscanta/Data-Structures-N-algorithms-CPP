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
    }
}

void delete_pos(int pos)
{
    Node *temp = head;
    // Checking if the position is less than one or not
    if(pos < 1 || temp==NULL || temp->next==NULL)
    {
        cout << "INVALID POSITION\n";
        return;
    }
    
    // Checking whether the list is empty or not
    else if(head==NULL)
    {
        cout << "The list is empty\n";
        return;
    }

    // Checking when the position is 1
    else if (pos == 1)
    {
        Node *temp = head; // Temp is pointing to head AKA the first node.
        head = head->next; // Now, head is pointing to the second node.
        delete temp; // Since, temp is still pointing to the first node, we delete temp.
        return;
    }

    
    else
    {
        Node *temp = head; // Creating a temp var & pointing it to head AKA the first element.
        Node *newtemp; // Creating another temp var
        int i = 1;

        while(i<pos-1 && temp!=NULL)
        {
            temp = temp->next;
            i++;
        }
        newtemp = temp->next;
        temp->next = newtemp->next;
        delete temp;


    }


    int i=1;
    Node *temp = head;
    Node *temp2;
    while(i<(pos-1))
    {
        temp = temp->next; //The temp will move until the next element is the one to be deleted (pos)
        i++;
    }
    temp2 = temp->next;
    temp->next = temp2->next;
    delete temp2;
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