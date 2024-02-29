#include <iostream>
using namespace std;
void calculateDegrees(int array2D[][2], int inDeg[], int outDeg[], int vertices);

int main() {
    int vertices;
    cout << "Enter number of vertices: ";
    cin >> vertices;
    int maxSize = 100;
    int inDeg[maxSize] = {0};
    int outDeg[maxSize] = {0};  
    int array2D[100][2];
    for (int i = 0; i < vertices; i++) {
        cout << "Enter vertex pair " << i + 1 << ":" << endl;
        cout << "Vertex 1: ";
        cin >> array2D[i][0];
        cout << "Vertex 2: ";
        cin >> array2D[i][1];
        cout << endl;
    }
    calculateDegrees(array2D, inDeg, outDeg, vertices);
    for (int i = 1; i <= vertices; i++) {
        if(inDeg[i] != 0 || outDeg[i] != 0){
        cout << "Vertex " << i << " degree is: ";
        cout << "Indegree : " << inDeg[i] << ", Outdegree: " << outDeg[i] << endl;
    }
    }
    return 0;
}
void calculateDegrees(int array2D[][2], int inDeg[], int outDeg[], int vertices) {
    for (int i = 0; i < vertices; i++) {
        outDeg[array2D[i][0]]++;
        inDeg[array2D[i][1]]++;   
    }
}
