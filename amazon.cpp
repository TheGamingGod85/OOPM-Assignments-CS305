#include <cmath>
#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int** generateSpiral(int n);
void printMatrix(int** matrix, int n, int width);
void generateAndPrintSpiral(int n);

int main() {
    generateAndPrintSpiral(3);
    return 0;
}

int** generateSpiral(int n) {
    int** spiral = new int*[n];
    for (int i = 0; i < n; i++) {
        spiral[i] = new int[n];
    }

    int directions[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

    int center = n % 2 == 0 ? n / 2 - 1 : n / 2;
    int row = center, col = center, num = 1;

    int segmentLength = 1;
    int dir = 0;
    int segmentCounter = 0;
    const int segmentsAfterToIncrease = 2;

    while (!(row >= n || row < 0 || col >= n || col < 0)) {
        for (int i = 0; i < segmentLength; i++) {
            if (row >= 0 && row < n && col >= 0 && col < n) {
                spiral[row][col] = num++;
            }
            row += directions[dir][0];
            col += directions[dir][1];
        }
        dir = (dir + 1) % 4;
        segmentCounter = (segmentCounter + 1) % segmentsAfterToIncrease;
        if (segmentCounter == 0) {
            segmentLength++;
        }
    }

    return spiral;
}

void printMatrix(int** matrix, int n, int width) {
    cout << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(width) << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void generateAndPrintSpiral(int n) {
    int** spiral = generateSpiral(n);

    int maxNumber = n * n;
    int width = to_string(maxNumber).length();

    printMatrix(spiral, n, width);

    for (int i = 0; i < n; i++) {
        delete[] spiral[i];
    }
    delete[] spiral;
}