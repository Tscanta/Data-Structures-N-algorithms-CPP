#include <iostream>
using namespace std;

int istart(int x);
int iend(int x);
int ipos(int x,  int pos);
void display();

int a[100]={10,20,30,40,50}; // Actual size of the array is 100
int n=5; // Total number of elements in the array
float x;
int pos;

int main(){
    int opt;
    display();
    cout << "\n1.Insert Start.\n\n2.Insert End.\n\n3.Insert Pos.\n4.Update\n";
    cin >> opt;
    switch(opt)
    {
        case 1:
            cout << "\nEnter a number\n";
            cin >> x;
            istart(x);
            display();
            break;
        case 2:
            cout << "\nEnter a number\n";
            cin >> x;
            iend(x);
            display();
            break;
        case 3:
            cout << "\nEnter a number\n";
            cin >> x;
            cout << "\nEnter a position\n";
            cin >> pos;
            ipos(x,pos);
            display();
            break;
        case 4:
            cout << "\nEnter a number\n";
            cin >> x;
            cout << "\nEnter a position\n";
            cin >> pos;
            update(x,pos);
            display();
            break;
        default:
            cout << "Invalid Input.\n";
    }
}

int istart(int x){
    for(int i=n; i>=1; i--) /* Starts from the end, and goes till position 1 -
                                which is actually index0 and thus the index 0 is now empty */
    {
        a[i] = a[i-1]; // when i=1 then i-1=0, here the value of index0 will be shifted to index1 
    }
    a[0] = x; // Index0 now contains the new element x
    n++; // Creates an extra array block
return 0; 
}

int iend(int x){
    a[n] = x;
    n++;
return 0;
}

int ipos(int x, int pos){
    // Checking the valid parameters
    if(pos<0 || pos>n)
    {
        cout << "INVALID Statement\n";
    }
    for(int i=n; i>=pos; i--)
    {
        a[i] = a[i-1];
    }
    a[pos-1] = x;
    n++; 
return 0;
}

int update(int x, int pos)
{
    if(pos < 1 || pos > n)
    {
        cout << "INVALID POSITION\n";
        return 0;
    }

    a[pos - 1] = x;

    return 0;
}

void display(){
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
}