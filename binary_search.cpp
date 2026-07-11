#include <iostream>
using namespace std;

void binary_search(int);
int a[100];
int n;

int main()
{
    int key;
    cout << "Enter the number of elements in the array: ";
    cin >> n; // Total number of elements in the array.
    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; // Enter the elements of the array. NOTE! THE ELEMENTS MUST BE ENTERED IN SORTED ORDER FOR BINARY SEARCH TO WORK.
    }
    cout << "Enter the element to be searched: ";
    cin >> key; // Element to be searched.
    binary_search(key); 
}

void binary_search(int key)
{
    int lb = 0;
    int ub = n - 1;
    int mid;
    while (lb <= ub)
    {
        mid = (lb + ub) / 2;
        if (a[mid] == key)
        {
            cout << "Element found at index: " << mid << endl;
            return;
        }
        else if (a[mid] < key)
        {
            lb = mid + 1;
        }
        else
        {
            ub = mid - 1;
        }
    }
    cout << "Element not found in the array" << endl;
}