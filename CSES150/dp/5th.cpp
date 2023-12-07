#include <iostream>
#include <cstring>
#include <limits>
#include <climits>
#include <algorithm>
using namespace std;
int MOD = 1e9+7;
int dp[1000005];
//int solve(int x){
//    if(x==0){
//        return 0;
//    }
//    
//    int mini = INT_MAX;
//    for (char c : to_string(x)) {
//        int ans = solve(x-(c-'0'));
//        if(ans!=INT_MAX){
//            mini = min(mini,1+ans);
//        }
//    }
//    return mini;
//}
int Tabulation(int n ){
    dp[0] = 0;
    for(int i = 1 ; i<=n ; i++){
        for(char c :to_string(i)){
            dp[i] = min(dp[i], 1 + dp[i-(c-'0')]);
        }
    }
    return dp[n];
}


int main(){
    int n ;
    cin>>n;
    memset(dp,0x3f,sizeof(dp));
    int ans =  Tabulation(n);
    cout<<ans<<endl;
}