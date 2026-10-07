#include <iostream>
using namespace std;

void insertionSort(int a[], int l)
{
    for(int i=1;i<l;i++)
    {
        int temp=a[i];
        int j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
}

int main()
{
    int a[] = {90,50,40,80,20,10,0};
    int l = sizeof(a)/sizeof(a[0]);


    // Printing the Unsorted Array
    cout << "Unsorted Array: ";
    for(int i=0;i<l;i++)
        cout << a[i] << " ";
    cout << endl;


    insertionSort(a,l);
    // Printing the Sorted Array
    cout << "Sorted Array: ";
    for(int i=0;i<l;i++)
        cout << a[i] << " ";

}