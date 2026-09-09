// Insertion operations on array
#include <iostream>
using namespace std;

int insert_start(int x);
int insert_end(int x);
int insert_pos(int x,int pos);
void display();
_
int main()
{  
    int a[100], n, x, pos;
    int choice = 0;
    cout << "DEBUG ZONE\n";
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while(choice != 3)
    {
        cout << "Press 1. Insert at Start\n";
        cout << "Press 2. Insert at End\n";
        cout << "Press 3. Insert at Position \n";
        cin >> choice;
        switch(choice)
        {
            case 1:
                cout << "Enter the element to insert at start: ";
                cin >> x;
                insert_start(x);
                display();
                break;
            case 2:
                cout << "Enter the element to insert at end: ";
                cin >> x;
                insert_end(x);
                display();
                break;
            case 3:
                cout << "Enter the number and the position to insert: ";
                cin >> x >> pos;
                insert_pos(x,pos);
                display();
                break;
            default:
                cout << "INVALID ELEMENT\n";
            }
        }
    }
        
int insert_start(int x)
{
    for(int i=n; i > 0; i--)
    {
        a[i] = a[i-1]; //shifting the elements to the right
    }
    a[0] = x;
    n++;
}

int insert_end(int x)
{
        a[n] = x; //inserting the element at the end
        n++;
}

int insert_pos(int x, int pos)
{

    if(pos >= 0 && pos <= n) //checking for valid position cant be less than 0 or greater than the array size
    {
        for(int i=n; i > pos; i--)
        {
            a[i] = a[i-1]; //shifting the elements to the right
        }
        n++;
    }
    else
    {
        cout << "Invalid position\n";
        break;
    }
}

void display()
{
    cout << "Array elements are: ";
    for(int i=0; i<n; i++)
    {
        cout << a[i] << " "; //printing the array elements
    }
    cout << endl;
}