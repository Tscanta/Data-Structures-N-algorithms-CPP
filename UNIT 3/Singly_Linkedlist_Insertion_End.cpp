#include <iostream>
using namespace std;

void insert_at_end(int x);
void display();

class Node{
    public:
        int data;
        Node *next;

        Node (int x)
        {
            data = x;
            next = NULL;
        }
}; Node *head = NULL; //Initializing the head as NULL

int main(){
    int n,x;
    cout << "How many numbers? ";
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cout << " \n";
        cout << "Enter a number - \n";
        cin >> x;
        insert_at_end(x);
        display();
    }
}

void insert_at_end(int x){
    Node *newnode = new Node(x);
    if(head == NULL){
        head = newnode;
    }
    else{
        Node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void display(){
    Node *temp = head;
    if(head == NULL){
        cout << "The list is empty\n";
    }
    else{
        while(temp != NULL){
            cout << temp->data <<"->";
            temp = temp->next;
        }
    }
}