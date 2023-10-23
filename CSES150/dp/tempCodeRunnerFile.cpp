#include <iostream>
#include <cstring>
#include <limits>
#include <climits>
#include <algorithm>
using namespace std;
//int MOD = 1e9+7;
//int dp[1005][1005];
int n ,x;
vector<int>price;
vector<int>pages;
int dp[10001][10001];
int solve(int idx , int w ){
    if (idx < 0) {
        return 0;
    }
    if(dp[idx][w]!=-1) return dp[idx][w];
    if(price[idx]<=w){
        return dp[idx][w]= max(pages[idx]+solve(idx-1, w-price[idx]) ,solve(idx-1,w) );
    }

    return dp[idx][w]= solve(idx-1,w) ;
    

}
int main(){

    cin>>n >>x ;
    price.resize(n);
    pages.resize(n);
    for(auto &i : price){
        cin>> i;
    }
    for(auto &j : pages){
        cin>>j;
    }
    memset(dp,-1,sizeof(dp));
    int ans = solve(n-1,x);
    cout<<ans;

}