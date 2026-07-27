// DELETION OPERATION
#include <iostream>
using namespace std;

int main()
{
    int a[100], n, choice, pos;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Press 1. Delete at Start\n";
    cout << "Press 2. Delete at End\n";
    cout << "Press 3. Delete at Position\n";
    cout << "Press 4. To exit\n";
    cin >> choice;
    switch(choice)
    {
        case 1:
            for(int i=0; i<n-1;i++) //shifting the elements to the left
            {
                a[i] = a[i+1]; //deleting the first element
            }
            n--; //decrementing the number of elements
            cout << "Array after deletion in the start: ";
            for(int i=0; i<n; i++) //printing the array after deletion
            {
                cout << a[i] << " ";
            }
            cout << endl;
            break;



        case 2:
            n--; //decrementing the number of elements
            cout << "Array after deletion in the end: ";
            for(int i=0; i<n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
            break;




        case 3:
            cout << "Enter the position to delete: ";
            cin >> pos;
            if(pos < 0 || pos >= n) //checking for valid position cant be less than 0 or greater than the arra
            {
                cout << "Invalid position\n";
                break;
            }
            for(int i=pos; i<n-1;i++) 
            {
                a[i] = a[i+1]; 
            }
            n--;
            cout << "Array after deletion at position " << pos << ": ";
            for(int i=0; i<n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
            break;




        case 4:
            exit(0);



        default:   
            cout << "Invalid Input\n";
    }
}