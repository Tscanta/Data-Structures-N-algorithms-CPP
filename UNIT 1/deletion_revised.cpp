#include <iostream>
using namespace std;

int estart();
int eend();
int epos(int pos);
void display();

int a[100]={10,20,30,40,50}; // Actual size of the array is 100
int n=5; // Total number of elements in the array
float x;
int pos;

int main(){
    int opt;
    display();
    cout << "\n1.Delete Start.\n\n2.Delete End.\n\n3.Delete Pos.\n";
    cin >> opt;
    switch(opt)
    {
        case 1:
            estart();
            display();
            break;
        case 2:
            eend();
            display();
            break;
        case 3:
            cout << "\nEnter a position\n";
            cin >> pos;
            epos(pos);
            display();
            break;
        default:
            cout << "Invalid Input.\n";
    }
}

int estart(){
    for(int i=0;i<n-1;i++)
    {
        a[i] = a[i+1]; // Shifting all the elements to the left
    }
    n--;
return 0;
}

int eend(){
    n--; // It will decrement the last element by default
return 0;
}

int epos(int pos){
    // Checking for position validator
    if(pos<0 || pos > n)
        cout << "INVALID\n";
    
    for(int i=pos-1; i<n-1; i++) /* It will start from the position-1 index, 
                                    example; if the position is 4 -> it will start from index 3. Till n-1.*/
    {
        a[i] = a[i+1];
    }
    n--;
return 0;
}

void display(){
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
}