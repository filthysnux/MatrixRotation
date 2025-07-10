#include <iostream>
using namespace std;

void printMatrix(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void rotate90(int mat[3][3], int res[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            res[j][2 - i] = mat[i][j];
}

void rotate180(int mat[3][3], int res[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            res[2 - i][2 - j] = mat[i][j];
}

void rotate270(int mat[3][3], int res[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            res[2 - j][i] = mat[i][j];
}

int main() {
    int matrix[3][3];
    int result[3][3];
    int choice;

    cout << "Enter 3x3 Matrix (row-wise):\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> matrix[i][j];

    cout << "\nChoose rotation:\n";
    cout << "1. 90° Clockwise\n";
    cout << "2. 180°\n";
    cout << "3. 90° Counterclockwise\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "\nRotated Matrix:\n";

    if (choice == 1)
        rotate90(matrix, result);
    else if (choice == 2)
        rotate180(matrix, result);
    else if (choice == 3)
        rotate270(matrix, result);
    else {
        cout << "Invalid choice.\n";
        return 0;
    }

    printMatrix(result);
    return 0;
}
