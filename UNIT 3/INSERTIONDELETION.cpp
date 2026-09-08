#include <iostream>
using namespace std;

void insert_start(int x);
void insert_end(int x);
void insert_pos(int x, int pos);

void delete_start();
void delete_end();
void delete_pos(int pos);

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
    int x, pos, opt=0, choice=0;
    char insdel;
    while(choice != 3) // Keep running while opt is not equal to 3.
    {
        cout << "\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                cout << "\nPress I for Insert\n";
                cin >> insdel;
                insdel = toupper(insdel);

                if (insdel == 'I')
                {
                    cout << "\nPress 1. Insert at Start\n";
                    cout << "\nPress 2. Insert at End\n";
                    cout << "\nPress 3. Insert at Position\n";
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
                        default:
                            cout << "INVALID INPUT\n";
                            break;
                    }
                }
                break;
            case 2:
                cout << "\nPress D for Delete\n";
                cin >> insdel;
                insdel = toupper(insdel);

                if (insdel == 'D')
                {
                    cout << "\nPress 1. Delete at Start\n";
                    cout << "\nPress 2. Delete at End\n";
                    cout << "\nPress 3. Delete at Position\n";
                    cin >> opt;
                    switch(opt)
                    {
                        case 1:
                            delete_start();
                            break;
                        case 2:
                            delete_end();
                            break;
                        case 3:
                            cout << " \n";
                            cout << "Enter the position - \n";
                            cin >> pos;
                            delete_pos(pos);
                            break;
                        case 4:
                            exit(0);
                        default:
                            cout << "INVALID INPUT\n";
                    }
                }
                break;
            default:
                cout << "INVALID INPUT\n";
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

void delete_start()
{
    if(head==NULL)
    {
        cout << "The List is Empty\n";
    }
    else
    {
        Node *temp = head;
        head = head->next;
        cout << temp->data << "->";
        delete temp;
    }
}
void delete_end()
{
    if(head==NULL)
    {
        cout << "The list is Empty\n";
    }
    else if (head->next==NULL) // When there is only one node
    {
        delete head;
        head=NULL;
    }
    else
    {
        Node *temp = head;
        Node *newtemp=head;
        while(temp->next!=NULL)
        {
            newtemp = temp;
            temp = temp->next;
        }
        newtemp->next=NULL;
        delete newtemp;
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


