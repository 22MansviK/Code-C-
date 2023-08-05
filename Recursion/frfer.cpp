#include <iostream>
#include <vector>

using namespace std;

bool isEquilibriumPoint(const vector<vector<int>>& matrix, int row, int col) {
    int N = matrix.size();
    int M = matrix[0].size();

    int sumAbove = 0, sumBelow = 0, sumLeft = 0, sumRight = 0;

    // Calculate sum of elements above and below the current element (row, col)
    for (int i = 0; i < N; i++) {
        if (i < row)
            sumAbove += matrix[i][col];
        else if (i > row)
            sumBelow += matrix[i][col];
    }

    // Calculate sum of elements to the left and right of the current element (row, col)
    for (int j = 0; j < M; j++) {
        if (j < col)
            sumLeft += matrix[row][j];
        else if (j > col)
            sumRight += matrix[row][j];
    }

    // Check if the conditions for equilibrium point are met
    return (sumAbove == sumBelow) && (sumLeft == sumRight);
}

vector<pair<int, int>> findEquilibriumPoints(const vector<vector<int>>& matrix) {
    vector<pair<int, int>> equilibriumPoints;

    int N = matrix.size();
    int M = matrix[0].size();

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (isEquilibriumPoint(matrix, i, j)) {
                equilibriumPoints.push_back(make_pair(i, j));
            }
        }
    }

    return equilibriumPoints;
}

int main() {
    // Sample matrix (3x4) - Replace this with your input matrix
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    vector<pair<int, int>> equilibriumPoints = findEquilibriumPoints(matrix);

    cout << "Equilibrium Points:" << endl;
    for (const auto& point : equilibriumPoints) {
        cout << "Row: " << point.first << ", Column: " << point.second << endl;
    }

    return 0;
}
