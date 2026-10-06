#include <bits/stdc++.h>
using namespace std;

/*
 * HackerRank: Mark and Toys
 * Approach: Sort toy prices in ascending order and buy the
 * cheapest toys while the budget allows.
 *
 * Time Complexity: O(N log N)
 * Auxiliary Space: O(1) auxiliary space apart from the sorting
 * implementation/container storage.
 */

int main() {
    int n;
    long long budget;
    cin >> n >> budget;

    vector<long long> prices(n);
    for (long long &price : prices) {
        cin >> price;
    }

    sort(prices.begin(), prices.end());

    int count = 0;

    for (long long price : prices) {
        if (budget < price) {
            break;
        }

        budget -= price;
        ++count;
    }

    cout << count << '\n';

    return 0;
}
