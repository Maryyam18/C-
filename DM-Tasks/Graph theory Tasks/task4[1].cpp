#include <iostream>
using namespace std;

void adjacen(int array2D[][2], int array2D2[][100], int vertices, int arr[]);

int main() {
    int vertices;
    cout << "Enter number of vertices: ";
    cin >> vertices;

    int arr[100] = {0};
    int array2D[100][2];

    for (int i = 0; i < vertices; i++) {
        cout << "Enter vertex pair " << i + 1 << ":" << endl;
        cout << "Vertex 1: ";
        cin >> array2D[i][0];
        cout << "Vertex 2: ";
        cin >> array2D[i][1];

        // Update arr array to include all vertices
        arr[array2D[i][0] - 1] = 1;
        arr[array2D[i][1] - 1] = 1;
        cout << endl;
    }

    int array2D2[100][100] = {0}; 

    adjacen(array2D, array2D2, vertices, arr);

    cout << "Adjacency Matrix is: ";
    for (int i = 0; i < vertices; i++) {
        cout << i + 1 << " ";
    }
    cout << endl;

    for (int i = 0; i < vertices; i++) {
        cout << i + 1 << " ";
        for (int j = 0; j < vertices; j++) {
            cout << array2D2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

void adjacen(int array2D[][2], int array2D2[][100], int vertices, int arr[]) {
    for (int i = 0; i < vertices; i++) {
        int a = array2D[i][0] - 1;
        int b = array2D[i][1] - 1;
        array2D2[a][b] = 1;
        array2D2[b][a] = 1;
    }
}
