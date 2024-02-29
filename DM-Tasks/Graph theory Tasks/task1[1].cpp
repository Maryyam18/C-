#include <iostream>
using namespace std;

// Function to calculate degrees
void calculateDegrees(int array2D[][2], int arr[], int vertices);
int main()
{
    int vertices;
    cout << "Enter number of vertices: ";
    cin >> vertices;
    int arr[vertices + 1] = {0}; // Adjust the size based on the maximum vertex number
    int array2D[20][2];
    for (int i = 0; i < vertices; i++)
    {
        cout << "Enter vertex pair " << i + 1 << ":" << endl;
        cout << "Vertex 1: ";
        cin >> array2D[i][0];
        cout << "Vertex 2: ";
        cin >> array2D[i][1];
        cout << endl;
    }
    calculateDegrees(array2D, arr, vertices);
    for (int i = 1; i <= vertices; i++)
    {
        cout << "Vertex " << i << " degree is " << arr[i] << endl;
    }
    return 0;
}
void calculateDegrees(int array2D[][2], int arr[], int vertices)
{
    for (int i = 0; i < vertices; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            arr[array2D[i][j]]++;
        }
    }
}
