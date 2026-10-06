#include <bits/stdc++.h>
using namespace std;

/*
 * HackerRank: Mini-Max Sum
 * Approach: Track the total sum, minimum value, and maximum value.
 * Minimum sum = total - maximum
 * Maximum sum = total - minimum
 *
 * Time Complexity: O(N)
 * Auxiliary Space: O(1)
 */

int main() {
    vector<long long> a(5);
    long long total = 0;
    long long minimum = LLONG_MAX;
    long long maximum = LLONG_MIN;

    for (long long &x : a) {
        cin >> x;
        total += x;
        minimum = min(minimum, x);
        maximum = max(maximum, x);
    }

    cout << total - maximum << " " << total - minimum << '\n';

    return 0;
}
