#include <iostream>
using namespace std;

void linear_search(int);
int a[100];
int n;

int main()
{
    int key;
    cout << "Enter the number of elements in the array: ";
    cin >> n; // Total number of elements in the array
    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; // Enter the elements of the array
    }
    cout << "Enter the element to be searched: ";
    cin >> key; // Element to be searched
    linear_search(key); 
}

void linear_search(int key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            cout << "Element found at index " << i << endl;
            break;
        }
    }
    if (i == n) // If the loop completes without finding the element
    {
        cout << "Element not found in the array" << endl;
    }    
}