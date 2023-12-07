#include <map>
#include <unordered_map>
#include <stack>
#include <queue>
#include <set>
#include <iostream>
#include <cstring>
#include <limits>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    int sum = 0, max = 0, mini = 0;
    int f = 1;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        arr[i] = val;
        sum += val;
    }

    int r = sum / n;
    for (int i = 0; i < n; i++) {
        if (abs(r - arr[i]) % 2 != 0) {
            cout << "No" << endl;
            return;
        }

        if (arr[i] == r) continue;
        if (arr[i] > r && (arr[i] - r) % 2 == 0) max += arr[i] - r;
        if (arr[i] < r && (r - arr[i]) % 2 == 0) mini += r - arr[i];
    }

    if (max != mini && f == -1) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
