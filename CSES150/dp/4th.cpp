#include <iostream>
#include <cstring>
#include <limits>
#include <climits>
#include <algorithm>
using namespace std;
int MOD = 1e9+7;
int N;
int dp[1000001];


int main() {
  int mod = 1e9+7;
  int n, target;
  cin >> n >> target;
  vector<int> c(n);
  for (int&v : c) cin >> v;
  vector<int> dp(target+1,0);
  dp[0] = 1;
  for(int i = 0 ; i<n ; i++){
    for(int val = 1 ; val<=target ; val++){
        if(val-c[i]>=0){
            dp[val] =( dp[val] + dp[val - c[i]] )%mod;
        }
    }
  }
  cout << dp[target] << endl;
}