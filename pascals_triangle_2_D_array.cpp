#include <iostream>
#include<vector>
using namespace std;

/**
 * Generates Pascal's Triangle up to the specified number of rows.
 *
 * @param numRows The number of rows to generate in Pascal's Triangle.
 * @return A 2D vector representing Pascal's Triangle, where each inner vector is a row in the triangle.
 *
 * Example:
 *   pascal(5) returns:
 *     [[1],
 *      [1, 1],
 *      [1, 2, 1],
 *      [1, 3, 3, 1],
 *      [1, 4, 6, 4, 1]]
 */


vector<vector<int>> pascal(int numRows) {
    vector<vector<int>> ret;
    for (int i = 0; i < numRows; i++) {
        vector<int> row(i + 1, 1);
        for (int j = 1; j < i; j++) {
            row[j] = ret[i - 1][j] + ret[i - 1][j - 1];
        }
        ret.push_back(row);
    }
    return ret;
}
int main() {
    int n;
    cout << "Enter number of rows you want: ";
    cin >> n;
    vector<vector<int>> ans;
    ans = pascal(n);
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


