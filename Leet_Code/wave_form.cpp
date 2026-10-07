#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    vector<int> ans;

    int row = matrix.size();
    int col = matrix[0].size();

    int left = 0;
    int right = col - 1;
    int top = 0;
    int bottom = row - 1;

    while (left <= right && top <= bottom) {

        // Top row
        for (int j = left; j <= right; j++) {
            ans.push_back(matrix[top][j]);
        }
        top++;

        // Right column
        for (int i = top; i <= bottom; i++) {
            ans.push_back(matrix[i][right]);
        }
        right--;

        // Bottom row
        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                ans.push_back(matrix[bottom][j]);
            }
            bottom--;
        }

        // Left column
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }

    // Print spiral
    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}