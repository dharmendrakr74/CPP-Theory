#include<iostream>
#include<vector>
using namespace std;

/**
 * Sorts a vector of integers containing only 0s and 1s in ascending order.
 *
 * This function works by first counting the number of zeros in the vector.
 * Then, it iterates over the vector and sets the first `zeros_count` elements to 0,
 * and the remaining elements to 1.
 *
 * @param v The vector of integers to be sorted.
 *
 * Example:
 *   Input:  [1, 0, 1, 0, 1, 0, 0, 1]
 *   Output: [0, 0, 0, 0, 1, 1, 1, 1]
 */
void sortZeroesAndOne(vector<int>& v) {
    int zeros_count = 0;
    for (int ele : v) {
        if (ele == 0) {
            zeros_count++;
        }
    }
    for (int i = 0; i < v.size(); i++) {
        if (i < zeros_count) {
            v[i] = 0;
        } else {
            v[i] = 1;
        }
    }
}

/**
 * Main function to test the sortZeroesAndOne function.
 *
 * Reads the size of the vector and its elements from the user,
 * sorts the vector using sortZeroesAndOne, and prints the sorted vector.
 *
 * @return 0 on successful execution.
 */
int main() {
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    sortZeroesAndOne(v);
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}