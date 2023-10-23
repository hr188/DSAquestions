#include <iostream>
#include <cstring>
#include <limits>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;
long long MOD = 1e9+7;
int n ;
int64_t dp[1000001][2] ;
void solve(){
    for(int i = 1 ; i<=1000000; i++){
        if(i==1){
            dp[i][0] = 1; //zero partition
            dp[i][1] = 1; //1
        }
        else{
            dp[i][0] = (2*dp[i-1][0] + dp[i-1][1])%MOD;
            dp[i][1] = (dp[i-1][0] + 4*dp[i-1][1])%MOD;// -- |-*3
        }
    }
}
int main(){
    int t;
    cin>>t;
    solve();
    while(t--){
    cin>>n;
    cout<< (dp[n][0]  + dp[n][1])%MOD <<endl;
    }
}
