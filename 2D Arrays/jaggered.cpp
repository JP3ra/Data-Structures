#include <iostream>
using namespace std;

int main() {
    int row;
    cin >> row;

    int **arr = new int*[row];
    int *colArr = new int[row]; // Array to store column sizes for each row

    // Input for each row and its elements
    for (int i = 0; i < row; i++) {
        cout << "Enter the column size for row " << i << ": ";
        cin >> colArr[i]; // Store the column size for this row
        arr[i] = new int[colArr[i]];

        for (int j = 0; j < colArr[i]; j++) {
            cin >> arr[i][j];
        }
    }

    // Output the jagged array
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < colArr[i]; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Freeing allocated memory
    for (int i = 0; i < row; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    delete[] colArr;

    return 0;
}
