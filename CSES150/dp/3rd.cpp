#include <iostream>
#include <cstring>
#include <limits>
#include <climits>
#include <algorithm>
using namespace std;
int MOD = 1e9+7;
int64_t dp[1000006];
int solve(vector<int> &arr , int64_t x){
    if(x==0){
        return 1;
    }
    if(x<0){
        return 0 ;
    }
    if(dp[x]!=-1) return dp[x];

    int64_t ans = 0 ;
    for(int i = 0 ; i <arr.size() ; i++){
        ans = (ans + solve(arr, x - arr[i])) % MOD;
    }
    return dp[x] =  ans;
}
int64_t Tablation(vector<int> &arr , int64_t x){
    dp[0] = 1;
    for(int tar= 1 ; tar<=x ; tar++){
        int64_t ans = 0 ;
            for(int i = 0 ; i <arr.size() ; i++){
                if(arr[i]<=tar)
                ans = (ans + dp[tar-arr[i]]) % MOD;
            }
            dp[tar] = ans;
    }
    return dp[x];
}

int main(){
    ios_base::sync_with_stdio(false);
    int n , x ;
    cin>>n>>x;
    vector<int> arr(n);
    for(auto &val : arr) cin>>val;

    memset(dp, 0, sizeof(dp));
    int64_t ans =  solve(arr, x);
    cout<<ans<<endl;
}



//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//  int mod = 1e9+7;
//  int n, target;
//  cin >> n >> target;
//  vector<int> c(n);
//  for (int&v : c) cin >> v;
//
//  vector<int> dp(target+1,0);
//  dp[0] = 1;
//  for (int i = 1; i <= target; i++) {
//    for (int j = 0; j < n; j++) {
//      if (i-c[j] >= 0) {
//	(dp[i] += dp[i-c[j]]) %= mod;
//      }
//    }
//  }
//  cout << dp[target] << endl;
//}