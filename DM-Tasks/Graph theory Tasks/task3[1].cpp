#include <iostream>
using namespace std;

bool isBipartite(int array2D[][2], int arr[], int vertices);
int main() {
    int vertices;
    cout << "Enter the number of vertices: ";
    cin >> vertices;
    int arr[100] = {0};
    int array2D[100][2];
    for (int i = 0; i < vertices; i++) {
        cout << "Enter vertex pair " << i + 1 << ":" << endl;
        cout << "Vertex 1: ";
        cin >> array2D[i][0];
        cout << "Vertex 2: ";
        cin >> array2D[i][1];
        cout << endl;
    }
    bool ans = isBipartite(array2D, arr, vertices);
    if (ans == true) { 
        cout << "Yes, The graph, is bipartite.";
    } else {
        cout << "No, The graph, is not bipartite.";
    }
    return 0;
}
bool isBipartite(int array2D[][2], int arr[], int vertices) {
    bool result = true;
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < 2; j++) {
            arr[array2D[i][j]]++;
        }
    }
    for (int i = 1; arr[i] != 0; i++) {
        if (arr[i] == 2) {
            result = true;
        } else {
            result = false;
            break;
        }
    }
    return result;
}
