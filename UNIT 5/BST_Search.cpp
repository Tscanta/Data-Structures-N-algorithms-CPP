//Binary Search Tree
#include <iostream>
using namespace std;

// Initializing the Nodes
class Node
{
    public:
        Node *LC;
        int data;
        Node *RC;
        
        Node (int x)
        {
            RC = LC = NULL;
            data = x;   
        }
};
Node *root = NULL;

// Function Declarations
Node* insertion(Node *root, int x);
Node* deletion(Node *root, int k);
void search(int k);
Node *maxNode(Node *root);
void display(Node *root);

int main()
{
    int choice, key;
    do
    {
        cout << "\n----- BINARY SEARCH TREE -----\n";
        cout << "1. Insert\n";
        cout << "2. Search\n";
        cout << "3. Delete\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter the value to insert: ";
                cin >> key;
                root = insertion(root, key);
                display(root);
                cout << "\n";
                break;
            case 2:
                cout << "Enter key to search: ";
                cin >> key;
                search(key);
                break;
            case 3:
                cout << "Enter the value to delete: ";
                cin >> key;
                root = deletion(root, key);
                display(root);
                cout << "\n";
                break;
            case 4: cout << "GOOD BYE"; break;
            default: cout << "INVALID CHOICE. PLEASE TRY AGAIN\n";
        }
    }while(choice != 4);

    return 0;
}

void search(int k)
{
    Node *temp = root;

    while(temp != NULL)
    {
        if(k == temp->data)
        {
            cout << "KEY FOUND\n";
            return;
        }
        else if (k < temp->data)
        {
            temp = temp->LC;
        }
        else
        {
            temp = temp->RC;
        }
    }
    cout << "KEY NOT FOUND\n";
}

Node* insertion(Node *root, int x)
{
    if(root == NULL)
    {              
        Node *newnode = new Node(x); // avoiding creating a new node after every recursive call
        return newnode;
    }

    else if(x < root->data)
        root->LC = insertion(root->LC, x);
    else if(x >= root->data)
        root->RC = insertion(root->RC, x);
    
    return root;
}

Node* deletion(Node *root, int k)
{
    if(root == NULL)
        return NULL;
    else if(k < root->data) 
        root->LC = deletion(root->LC, k);
    else if(k > root->data) 
        root->RC = deletion(root->RC, k);


    else if(k==root->data) // Equal then check for childrens
    {
        if(root->LC == NULL && root->RC == NULL) // Zero children
        {
            delete root;
            return NULL;
        }
        else if(root->LC == NULL || root->RC == NULL) // One children
        {
            if(root->LC != NULL) // has a left Child (lC)
            {
                Node *temp = root->LC;
                delete root;         
                return temp;
            }
            else if(root->RC != NULL) // has a Right Child (RC)
            {
                Node *temp = root->RC;
                delete root;
                return temp;
            }
        }
        else // If it has both the children
        {
            Node *temp = maxNode(root->LC);
            root->data = temp->data;
            root->LC = deletion(root->LC,temp->data);
        }
    }
    return root;
}

void display(Node *root)
{
    if(root == NULL)
        return;
    
    display(root->LC);
    cout << root->data << " ";
    display(root->RC);
}


Node *maxNode(Node *root)
{
    while(root->RC != NULL)
        root = root->RC;

    return root;
}

