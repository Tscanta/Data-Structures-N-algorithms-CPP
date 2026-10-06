#include <iostream>

// Global Variables
int n=5; 
int a[]={80,20,40,10,50};
int i,j;

void bubbleSort(int a[])
{
    for(int i=0;i<n-1;i++) 
    {
        int flag = 0; // Flag variable to avoid any unecessary iterations
        for( j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                flag = 1; 
                
            }
        }
        if(flag == 0)
            break;
    }
}


int main()
{
    std::cout << "Unsorted Array: ";
    for(i=0;i<n;i++)
    {
        std::cout << a[i] << " ";
    }
    std::cout << "\n";

    bubbleSort(a);
    std::cout << "Sorted Array: ";
    for( i=0;i<n;i++)
    {
        std::cout << a[i] << " ";
    }
}

