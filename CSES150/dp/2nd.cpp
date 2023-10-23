#include <iostream>
#include <cstring>
#include <limits>
#include <climits>
#include <algorithm>
using namespace std;
int MOD = 1e9+7;
int dp[1000001];
int solve(vector<int> &arr , int x){
    if(x==0){
        return 0;
    }
    if(x<0){
        return INT_MAX;
    }
    if(dp[x]!=-1) return dp[x];

    int mini = INT_MAX;
    for(int i = 0 ; i <arr.size() ; i++){
        int ans =  solve( arr ,x-arr[i]);
        if(ans!= INT_MAX){
            mini = min(mini, 1+ ans);
        }
    }
    return dp[x] =  mini;
}

int main(){
    int n , x ;
    cin>>n>>x;
    vector<int> arr(n);
    for(auto &i : arr) cin>>i;

    memset(dp, -1, sizeof(dp));
    int ans =  solve(arr, x);
    if(ans == INT_MAX) ans =-1;
    cout<<ans<<endl;
}