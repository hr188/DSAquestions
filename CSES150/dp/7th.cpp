#include <iostream>
#include <cstring>
#include <limits>
#include <climits>
#include <algorithm>
using namespace std;
//int MOD = 1e9+7;

int n ,x;
vector<int>price;
vector<int>pages;
//int dp[10001][10001];
//int solve(int idx , int w ){
//    if (idx < 0 && w==0) {
//        return 0;
//    }
//    if(dp[idx][w]!=-1) return dp[idx][w];
//    if(price[idx]<=w){
//        return dp[idx][w]= max(pages[idx]+solve(idx-1, w-price[idx]) ,solve(idx-1,w) );
//    }
//
//    return dp[idx][w]= solve(idx-1,w) ;
//}
int Tabulation(){
    vector< vector<int> > dp(n+1,vector<int>(x+1,0));
for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= x; j++) {
      dp[i][j] = dp[i-1][j];
      int left = j-price[i-1];
      if (left >= 0) {
	dp[i][j] = max(dp[i][j], dp[i-1][left]+pages[i-1]);
      }
    }
  }
    return dp[n][x];
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
    //memset(dp,-1,sizeof(dp));
    int ans = Tabulation();
    cout<<ans;

}