#include <iostream>
using namespace std;

int main()
{
    int a[10][10];
    int i,j; // Row and Column, respectively
    int val; // Stores the value
    int vert; // Vertices
    int e; // Edges
    int src; // Source of the edge
    int dest; // Destination of the edge

    cout << "Enter the vertices: ";
    cin >> vert;

    for(int i=0; i<vert; i++)
    {
        for(int j=0; j<vert; j++)   
        {
            a[i][j]=0; // All the values in the matrix will be zero by default
        }
    }

    cout << "Enter the number of edges: ";
    cin >> e;
    for(int i=0; i<e; i++)
    {
        cout << "\nEnter the source: ";
        cin >> src;
        cout << "Enter the destination: ";
        cin >> dest;
        
        a[src][dest] = 1; // this is for directed graph, if it is undirected then also add this  a[dest][src] = 1;
    }

    // Printing the matrix
    cout << "\n-------------------\n";
    for(int i=0; i<vert; i++)
    {
        for(int j=0; j<vert; j++)   
        {
            
            cout << a[i][j]; // All the values in the matrix will be zero by default
            
        }
        cout << "\n";
    }
    cout << "-------------------\n";
}