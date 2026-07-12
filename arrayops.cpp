// Operations on Array
#include <iostream>
using namespace std;

void insert_at_start(int);
void insert_at_end(int);
void insert_at_position(int x, int pos);
int A[100];
int n=0;

int main()
{
    int choice,x,pos;
    while(1)
    {
        cout << "Press 1. Insert at Start\n";
        cout << "Press 2. Insert at End\n";
        cout << "Press 3. Insert at Position \n";
        cout << "Press 4. To exit\n";
        cin >> choice;
        switch(choice)
        {
            case 1:
                cout << "Enter a value: ";
                cin >> x;
                insert_at_start(x);
                break;
            case 2:
                cout << "Enter a value: ";
                cin >> x;
                insert_at_end(x);
                break;
            case 3:
                cout << "Enter a value & position: ";
                cin >> x >> pos;
                insert_at_position(x,pos);
                break;
            case 4:
                exit(0);
            default:
                cout << "Invalid Input\n";
        }
        cout << "Array: ";
        for(int i = 0; i < n; i++)
        {
            cout << A[i] << " ";
            cout << endl;
        }
    }
}

void insert_at_start(int x)
{
    for(int i = n; i > 0; i--)
    {
        A[i] = A[i-1];
    }
    A[0] = x;
    n++;
}
        
void insert_at_end(int x)
{
    A[n] = x;
    n++;
}

void insert_at_position(int x, int pos)
{
    if (pos >= 0 && pos <= n)
    {
        for(int i = n; i > pos; i--)
        {
            A[i] = A[i-1];
        }
        A[pos] = x;
        n++;
    }
    else
    {
        cout << "Invalid Value\n";
    }
}


