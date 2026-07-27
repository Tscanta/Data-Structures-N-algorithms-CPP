//Read an integer array of size n and print it. 
//Find the smallest adn the largest element in the array.
//Display all the values from the array which are greater than the average values of the array elements.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n]; //Creating an array of size n.
    cout << "Enter "<<n<<" elements in the array: ";
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

//PRINTING THE ARRAY
    cout << "Elements in the array are: " << endl;
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

//FINDING THE SMALLEST AND LARGEST ELEMENTS IN THE ARRAY
    int smallest = arr[0];
    int largest = arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i] < smallest)
            smallest = arr[i];
        else if(arr[i] > largest)
            largest = arr[i];
    }
    cout << "Smallest element in the array is: " << smallest << endl;
    cout << "Largest element in the array is: " << largest << endl << endl;

//DISPLAYING ALL THE VALUES FROM THE ARRAY WHICH ARE GREATER THAN THE AVERAGE VALUE OF THE ARRAY ELEMENTS
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
    }
    float average = (float)sum/n;
    cout << "Average value of the array elements is: " << average << endl;
    cout << "Elements greater than the average value are: ";
    for(int i=0; i<n; i++)
    {
        if(arr[i] > average)
            cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

