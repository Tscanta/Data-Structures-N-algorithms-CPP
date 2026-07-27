// Operations on array
#include <iostream>
using namespace std;

int main()
{  
    int a[100], n, x, pos;
    int choice = 0;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while(choice != 5)
    {
        cout << "Press 1. Insert at Start\n";
        cout << "Press 2. Insert at End\n";
        cout << "Press 3. Insert at Position \n";
        cout << "Press 4. To Display\n";
        cout << "Press 5. To Exit\n";
        cin >> choice;
        switch(choice)
        {
            case 1:
                cout << "Enter the element to insert at start: ";
                cin >> x;
                for(int i=n; i > 0; i--)
                {
                    a[i] = a[i-1]; //shifting the elements to the right
                }
                a[0] = x;
                n++;
                break;
            case 2:
                cout << "Enter the element to insert at end: ";
                cin >> x;
                a[n] = x; //inserting the element at the end
                n++;
                break;
            case 3:
                cout << "Enter the position to insert: ";
                cin >> pos;
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
                break;
            case 4:
                cout << "Array elements are: ";
                for(int i=0; i<n; i++)
                {
                    cout << a[i] << " "; //printing the array elements
                }
                cout << endl;
                break;
            case 5:
                exit(0);
            }
        }
    }
        