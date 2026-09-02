#include <iostream>
using namespace std;

int insert_at_start(Node *head, int value);
int insert_at_end(int value);
int insert_at_pos(int value, int pos);
void display();

class Node
{
    public:
        int data;
        Node *next;
        Node (int data, int value)
        {
            data = value;
            next = NULL; //Only a single node is there, the next node is null
        }   
}; Node *head = NULL;

int main()
{
    int choice = 0;
    cout << "Press 1. To insert at start\n";
    cout << "Press 2. To insert at end\n";
    cout << "Press 3. To insert at position\n";
    cout << "Press 4. To display the list\n";
    cout << "Press 5. To exit\n";
    cin >> choice;
    switch(choice)
    {
        case 1:
            int value;
            cout << "Enter the value:";
            cin >> value;
            insert_at_start(head, value);
            break;
        case 2:
            int value;
            cout << "Enter the value:";
            cin >> value;
            insert_at_end(value);
            break;
        case 3:
            int value, pos;
            cout << "Enter the value:";
            cin >> value;
            cout << "Enter the position:";
            cin >> pos;
            insert_at_pos(value, pos);
            break;
        case 4:
            display();
            break;
        case 5:
            exit();
            break;
        default:
            cout << "INVALID OPTION\n";
    }
    
}

int insert_at_start(Node *head, int value)
{
    Node *newnode = new Node (value); //Dynamic Memory Allocation of node AKA allocation the node dynamically 
    if(head == NULL)
        head = newnode;
    else
        newnode -> next = head;
        head = newnode; 
}

int insert_at_end(int value)
{
    Node *newnode = new Node(value); //Creating a new node
    if(head == NULL)
        head = newnode;
    else
        Node *temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }temp->next = newnode;
}

int insert_at_pos(int value, int pos)
{
        Node *newnode = new Node(value); //Creating a new node
        int count = 1; 
        while(count < (pos-1))
        {
            temp = temp->next;
            count++;
        }
        newnode->next = temp->next;
        temp->next=newnode;
}

void display()
{
    Node *temp = head;
    if(head == NULL)
        cout << "The list is empty\n";
    else
        while(temp->next != NULL)
        {
            cout << temp->data <<" -> ";
            temp = temp->next;
        }
}

