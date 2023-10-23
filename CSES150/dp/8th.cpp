#include <iostream>
#include <cstring>
#include <limits>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;
int MOD = 1e9+7;
int n , m ;
vector<int>arr;
vector<vector<long long > > dp; //dp[position][value]

int solve(){
    if(arr[0]!=0) dp[0][arr[0]] = 1; //there is path from here
    else{
        for(int i = 1 ; i<=m  ; i++){
            dp[0][i] = 1;
        }
    }

    for(int i = 1 ; i<n ; i++){
        if(arr[i]==0){
            for(int j = 1 ; j<=m ; j++){
                if(j-1>=1)
                    dp[i][j] = ( dp[i][j] + dp[i-1][j-1] ) %MOD;
                dp[i][j] = (dp[i][j] + dp[i-1][j]) %MOD;
                if(j+1<=m)
                    dp[i][j] = ( dp[i][j] + dp[i-1][j+1] )%MOD;
            }
        }
        else{
            if(arr[i]-1>=1)
                    dp[i][arr[i]] = ( dp[i][arr[i]] + dp[i-1][arr[i]-1] ) %MOD;
                dp[i][arr[i]] = (dp[i][arr[i]] + dp[i-1][arr[i]]) %MOD;
                if(arr[i]+1 <= m)
                    dp[i][arr[i]] = ( dp[i][arr[i]] + dp[i-1][arr[i]+1] )%MOD;
        }
    }

    int64_t ans = 0;
    for(int i = 1 ; i<=m; i++){
        ans = (ans + dp[n-1][i] ) %MOD;
    }
    return ans;
}
int main(){
    cin>>n>>m;
    arr.resize(n);
    dp.resize(n+1,vector<long long >(m+1,0));
    for(int &val :arr ) cin>>val;
    int ans = solve();
    cout<<ans<<endl;
}
