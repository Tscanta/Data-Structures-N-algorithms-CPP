#include <iostream>
using namespace std;

void binary_search(int, int, int);
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
    binary_search(0,n-1,key); 

    return 0;
}

void binary_search(int lb, int ub, int key)
{

    int mid = (lb + ub) / 2;

    //If there is only one element to match
    if(lb == ub)
    {
        if(key == a[mid])
            cout << "Element has been found!";
        else 
            cout << "Element not found!";
    } 
    else
    { 
        if(key == a[mid])
            cout << "Element has been found!";
        else if(key < a[mid])
            binary_search(lb, mid-1, key);
        else   
            binary_search(mid+1, ub, key);
    }
}