#include <iostream>
using namespace std;

void insert_at_pos(int x, int pos);
void display();

//Initializing a basic single linked node.
class Node{
    public:
        int data;
        Node *next;

        Node(int x){
            data = x;
            next = NULL;
        }
}; Node *head = NULL;

int main(){
    int x,pos,n;
    cout << "How many numbers? ";
    cin >> n;
    for(int i=0; i<n; i++){
        cout << " \n";
        cout << "Enter the data and the position: ";
        cin >> x >> pos;
        insert_at_pos(x,pos);
        display();
    }
}

void insert_at_pos(int x, int pos)
{
    Node *newnode = new Node(x);
    Node *temp = head;
    int count = 1;

    if(pos == 1){
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