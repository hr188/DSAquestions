//Your task is to count the number of ways to construct sum 
//n by throwing a dice one or more times. Each throw produces an outcome between 
//1
//1 and 
//6
//6.
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int MOD = 1e9+7;
//int dp[1000001];
//int solve(int n){
//    if(n==0){
//        return 1;
//    }
//    if(~dp[n]) return dp[n];
//    int64_t ans = 0;
//    for(int i = 1 ; i<=6 ; i++){
//        if(n-i>=0){
//            ans = ans%MOD +  solve(n-i)%MOD;
//            ans %= MOD;
//        }
//    }
//    return dp[n] = ans;
//}
int Tabulation(int n ){
    vector<int>dp(n+1,0);
    dp[0] = 1;
    for(int i = 1 ; i<=n ; i++){
        int64_t ans = 0;
        for(int j = 1 ; j<=6 ; j++ ){
            if(i-j>=0){
                ans = (ans + dp[i-j])%MOD;
            }
            dp[i] = ans;
        }
    }
    return dp[n];
}
int main(){
    int n;
    cin>>n;
    //memset(dp, 0, sizeof(dp));
    int ans =  Tabulation(n);
    cout<<ans<<endl;
}