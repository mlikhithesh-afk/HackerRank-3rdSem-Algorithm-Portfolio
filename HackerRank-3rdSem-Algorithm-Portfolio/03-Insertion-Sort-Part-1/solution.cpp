#include <bits/stdc++.h>
using namespace std;

/*
 * HackerRank: Insertion Sort - Part 1
 * Approach: Store the last element as the value to insert.
 * Shift larger elements one position to the right until the
 * correct position is found.
 *
 * Time Complexity: O(N) for this single insertion operation
 * Auxiliary Space: O(1)
 */

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int &x : arr) {
        cin >> x;
    }

    int value = arr[n - 1];
    int i = n - 2;

    while (i >= 0 && arr[i] > value) {
        arr[i + 1] = arr[i];

        for (int x : arr) {
            cout << x << ' ';
        }
        cout << '\n';

        --i;
    }

    arr[i + 1] = value;

    for (int x : arr) {
        cout << x << ' ';
    }
    cout << '\n';

    return 0;
}
