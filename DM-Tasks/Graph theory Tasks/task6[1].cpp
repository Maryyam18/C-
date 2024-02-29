#include <iostream>
using namespace std;

void incidenceMatrix(int array2D[][2], int incid[][100], int freq[], int vertices);
int main() {
    int vertices;
    cout << "Enter number of vertices: ";
    cin >> vertices;
    int array2D[100][2];
    int incid[100][100] = {0};
    int freq[100] = {0};
    for (int i = 0; i < vertices; i++) {
        cout << "Enter vertex pair " << i + 1 << ":" << endl;
        cout << "Vertex 1: ";
        cin >> array2D[i][0];
        cout << "Vertex 2: ";
        cin >> array2D[i][1];
        cout << "Frequency: ";
        cin >> freq[i];
        cout << endl;
    }
    incidenceMatrix(array2D, incid, freq, vertices);
    // Display incidence matrix
    cout << "Incidence Matrix:" << endl;
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            cout << incid[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
void incidenceMatrix(int array2D[][2], int incid[][100], int freq[], int vertices) {
    for (int i = 0; i < vertices; i++) {
        int vertex1 = array2D[i][0] - 1;
        int vertex2 = array2D[i][1] - 1;

        incid[vertex1][i] = freq[i];
        incid[vertex2][i] = -freq[i];
    }
}
