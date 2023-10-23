#include <iostream>
#include <cstring>
#include <limits>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;
    int Tabulation(string a, string b){
        const int n = a.length();
        const int m = b.length();
        vector< vector<int> >dp(n+1 ,vector<int>(m+1, 0));
        for(int i = 0 ; i<=m ; i++){
            dp[n][i] =  m  - i ;
        }
        for(int j =0 ; j<=n ; j++){
            dp[j][m] = n -j;
        }

        for(int i = n-1 ; i>=0 ; i--){  
            for(int j = m-1 ; j>=0 ; j--){
                int ans = 0 ;
                if(a[i]==b[j]) {
                    ans = dp[i+1][j+1];
                }
                else{
                    //insert ki call
                    int insert = 1+ dp[i][j+1];
                    //delete ki call 
                    int del = 1 + dp[i+1][j];
                    //replace ki call
                    int replace = 1 + dp[i+1][j+1];
                    ans = min(insert , min(del,replace));
                }
                 dp[i][j] = ans;
            }
        }
        return dp[0][0];
    }

int main(){
    string n,m;
    cin>>n >>m;
    int16_t ans = Tabulation(n,m);
    cout<<ans<<endl;
}








