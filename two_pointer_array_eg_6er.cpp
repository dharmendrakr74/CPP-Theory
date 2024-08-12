#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sortedSquares(vector<int>& a) {
    int n = a.size();
    vector<int> ans(n);
    int i = 0, j = n - 1;
    for (int k = n - 1; k >= 0; k--) {
        if (abs(a[i]) < abs(a[j])) {
            ans[k] = a[j] * a[j];
            j--;
        } else {
            ans[k] = a[i] * a[i];
            i++;
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> sortedArr = sortedSquares(arr);
    cout << "Sorted array after squaring: ";
    for (int i = 0; i < sortedArr.size(); i++) {
        cout << sortedArr[i] << " ";
    }
    cout << endl;

    return 0;
}