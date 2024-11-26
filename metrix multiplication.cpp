#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square matrices (n x n): ";
    cin >> n;

    int matrix1[n][n], matrix2[n][n], result[n][n];

    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix1[i][j];
        }
}
    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix2[i][j];
        }
    }

//Initialize the result matrix with zeros
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0;
        }
    }

    // Step 5: Perform matrix multiplication
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Step 6: Display the resultant matrix
    cout << "The resultant matrix after multiplication is:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;

}

