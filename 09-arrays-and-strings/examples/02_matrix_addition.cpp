// Example 09-02: 2D array – Matrix addition

#include <iostream>
using namespace std;

const int ROWS = 3, COLS = 3;

void printMatrix(int m[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int A[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[ROWS][COLS] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int C[ROWS][COLS];

    // Add matrices
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            C[i][j] = A[i][j] + B[i][j];

    cout << "Matrix A:" << endl;  printMatrix(A);
    cout << "Matrix B:" << endl;  printMatrix(B);
    cout << "A + B  :" << endl;   printMatrix(C);

    return 0;
}
