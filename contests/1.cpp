#include <iostream>
#include <vector>
using namespace std;

struct Stock {
    int q, pt, sellTime;
};
int main() {
    int n; cin >> n;
    vector<Stock> s;
    for (int i = 0; i < n; ++i) {
        int q, pt, sellTime;
        cin >> q >> pt >> sellTime;
        s.push_back({q, pt, sellTime});
    }
    int numDays; cin >> numDays;
    vector<vector<int>> arr(n, vector<int>(numDays));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < numDays; ++j) {
            cin >> arr[i][j];
        }
    }
    int queryTime; cin >> queryTime;
    int rp = 0, unrp = 0;
    for (int i = 0; i < n; ++i) {
        int q = s[i].q;
        int pt = s[i].pt;
        int sellTime = s[i].sellTime;
        if (pt <= queryTime) {
            int currPrice = arr[i][queryTime - 1];
            int purchasePrice = arr[i][pt - 1];
            
            if (sellTime == 0 || sellTime > queryTime) {
                unrp += q * (currPrice - purchasePrice);
            } else {
                int sellPrice = arr[i][sellTime - 1];
                rp += q * (sellPrice - purchasePrice);
            }
        }
    }
    cout  << rp << '\n'; cout << unrp;
    return 0;
}



