#include <iostream>
#include <vector>
using namespace std;

int main() { 
    // Multiplication of matrices requires the number of columns in the first matrix 
    // to be equal to the number of rows in the second matrix (i.e., if m * n and p * q, then n == p).
    int m;
    cout << "Enter The Number Of Rows For First Matrix: " << endl;
    cin >> m;
    int n;
    cout << "Enter The Number Of Columns For First Matrix: " << endl;
    cin >> n;

    vector<vector<int>> arr(m, vector<int>(n)); 

    cout << "Enter The Elements Of First Matrix: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Printing The First Matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int x;
    cout << "Enter The Number Of Rows For Second Matrix: " << endl;
    cin >> x;
    int y;
    cout << "Enter The Number Of Columns For Second Matrix: " << endl;
    cin >> y;

    // Ensure the matrices can be multiplied
    if (n != x) {
        cout << "Matrix multiplication not possible. Number of columns in the first matrix must equal the number of rows in the second matrix." << endl;
        return 0;
    }

    vector<vector<int>> arr1(x, vector<int>(y)); 

    cout << "Enter The Elements Of Second Matrix: " << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cin >> arr1[i][j];
        }
    }

    cout << "Printing The Second Matrix:" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    } 

    // Resultant matrix
    vector<vector<int>> res(m, vector<int>(y, 0)); // Initialize the resultant matrix with 0

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < n; k++) {
                res[i][j] += arr[i][k] * arr1[k][j];
            }
        }
    }

    // Print resultant matrix
    cout << "The Resultant Matrix Is:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < y; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}