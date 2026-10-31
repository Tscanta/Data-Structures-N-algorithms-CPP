#include <iostream>
using namespace std;

void binSearch(int, int, int);

// Declaring Global Variables
int a[100];
int n; // Stores the size of the array

int main()
{
    int key; // The key to search for
    cout << "Enter the size of the array: ";
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cout << "Enter the value " << i+1 << ". : ";
        cin >> a[i];
    }
    cout << "Enter the key element: ";
    cin >> key;
    binSearch(0,n-1,key);

    return 0;
}

void binSearch(int lb, int ub, int key)
{
    int mid;

    // If there is only one element
    if(lb>ub)
    {
        cout << "Key Not Found\n"; return;
    }

    mid = (lb+ub)/2;

    // If is it the last matching element
    if(lb == ub)
    {
        if(key == a[mid])
            cout << "Key Found\n";
        else
            cout << "Key Not Found\n";
    }
    
    else
    {
        
        if(key == a[mid])
            cout << "Key Found\n";
        else if(key < a[mid])
            binSearch(lb,mid-1,key);
        else   
            binSearch(mid+1,ub,key);      
    }
}