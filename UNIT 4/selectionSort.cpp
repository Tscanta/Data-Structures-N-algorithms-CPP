#include <iostream>

int n=5; // Size of the array
int a[]={60,20,40,10,50};
int i,j;

void selectionSort(int a[])
{
    for(i=0;i<n-1;i++)
    {
        int minIndex = i;
        for(j=i+1;j<n;j++)
        {
            if(a[minIndex]>a[j])
            {
                minIndex=j;
            }
        }
        int temp=a[i];
        a[i]=a[minIndex];
        a[minIndex]=temp;
    }
}


int main()
{

    std::cout << "Unsorted Array: ";
    for(i=0;i<n;i++)
    {
        std::cout << a[i] << " "; // Printing the elements of the array
    }
    std::cout << "\n";

    selectionSort(a);
    std::cout << "Sorted Array: ";
    for(i=0;i<n;i++)
    {
        std::cout << a[i] << " "; // Printing the elements of the array
    }
}