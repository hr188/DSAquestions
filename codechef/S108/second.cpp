#include <cmath>
#include <iostream> 
#include <algorithm>
#include <map>
#include <unordered_map>
#include <stack>
#include <queue>
#include <set>
#include <cstring>
#include <limits>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
 
        for (int i = 0; i < n; ++i)
            cin >> a[i];
 
        vector<int> last(n + 1, -1);
        vector<int> req(n + 1, -1);
 
        for (int i = 0; i < n; ++i) {
            int gap = i - last[a[i]] - 1;
            if (last[a[i]] != -1) {
                gap = (gap + 1) / 2;
            }
            req[a[i]] = max(gap, req[a[i]]);
            last[a[i]] = i;
        }
 
        int ans = n, who = n;
 
        for (int i = 1; i <= n; ++i) {
            if (last[i] != -1) {
                req[i] = max(req[i], n - last[i] - 1);
            }
            if (req[i] >= 0 && ans > req[i]) {
                ans = req[i];
                who = i;
            }
        }
 
        cout << who << " " << ans << endl;
    }
 
    return 0;
}