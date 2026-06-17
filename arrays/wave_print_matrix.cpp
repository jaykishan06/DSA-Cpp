#include <iostream>
#include <vector>
using namespace std;

vector<int> wavePrintMatrix(vector<vector<int>>& matrix, int m, int n) {

    vector<int> ans;

    for(int col = 0; col < n; col++) {

        // Even column -> Top to Bottom
        if(col % 2 == 0) {

            for(int row = 0; row < m; row++) {
                ans.push_back(matrix[row][col]);
            }
        }

        // Odd column -> Bottom to Top
        else {

            for(int row = m - 1; row >= 0; row--) {
                ans.push_back(matrix[row][col]);
            }
        }
    }

    return ans;
}

int main() {

    int m, n;
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));

    // Input matrix
    for(int row = 0; row < m; row++) {
        for(int col = 0; col < n; col++) {
            cin >> matrix[row][col];
        }
    }

    vector<int> result = wavePrintMatrix(matrix, m, n);

    // Print answer
    for(int x : result) {
        cout << x << " ";
    }

    return 0;
}