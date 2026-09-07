#include <iostream>
using namespace std;

void insert_start(int x);
void insert_end(int x);
void insert_pos(int x, int pos);

void delete_start(int x);
void delete_end(int x);
void delete_pos(int x, int pos);

void display();

class Node{
    public: 
        int data; //the actual data
        Node *next; // Stores the address of the next node

        Node(int x) // Making a constructor
        {
            data = x; 
            next = NULL;
        }
}; Node *head = NULL; //Initializing the head to null

int main()
{
    int n, x, pos, opt;
    char insdel;
    while(opt != 3) // will run until the user enters opt>4
    {
        cout << " \n";
        cout << "DO YOU WANT TO INSERT OR DELETE?";
        cin >> insdel;
        insdel = toupper(insdel);
        if (insdel == 'INSERT')
        {
            cout << "Press 1. Insert at Start\n";
            cout << "Press 2. Insert at End\n";
            cout << "Press 3. Insert at Position\n";
            cin >> opt;
            switch(opt)
            {
                case 1:
                    cout << " \n";
                    cout << "Enter a Number - \n";
                    cin >> x;
                    insert_start(x);
                    display();
                    break;
                case 2:
                    cout << " \n";
                    cout << "Enter a Number - \n";
                    cin >> x;
                    insert_end(x);
                    display();
                    break;
                case 3:
                    cout << " \n";  
                    cout << "Enter a Number and position - \n";
                    cin >> x >> pos;
                    insert_pos(x,pos);
                    display();
                    break;
            }
        }
        else if (insdel == 'DELETE')
        {
            
        }
    }
        
}


void insert_start(int x)
{
    Node *newnode = new Node(x);
    if(head == NULL) // If head is empty
    {
        head = newnode; // The head will be the newnode
    }
    else
    {
        newnode->next = head; // The next of the newnode is pointing to the head
        head = newnode; // The newnode is now the head
    }
}
void insert_end(int x)
{
    Node *newnode = new Node(x);
    if(head == NULL)
    {
        head = newnode;
    }
    else
    {
        Node *temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}
void insert_pos(int x, int pos)
{
    Node *newnode = new Node(x);
    Node *temp = head;
    int count = 1;

    if(pos == 1)
    {
        newnode->next = head;
        head = newnode;
    }
    else
    {
        while(count < (pos-1) && temp != NULL)
        {
            temp = temp->next;
            count++;
        }
        if(temp == NULL)
        {
            cout << "INVALID POSITION\n";
            delete newnode;
            return;
        }
        else
        {
            newnode->next = temp->next;
            temp->next = newnode;

        }
    }
}

void delete_start(int x)
{}
void delete_end(int x)
{}
void delete_pos(int x, int pos)
{}

void display(){
    Node *temp = head;
    if(head == NULL)
    {
        cout << "The list is empty\n";
    }
    else
    {
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
    }
}


