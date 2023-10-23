#include <iostream>
#include <cstring>
#include <limits>
#include <climits>
#include <algorithm>
using namespace std;
//int MOD = 1e9+7;
//int dp[1005][1005];
int n ;
vector< vector<char> >arr;
int rec( int i , int j ){
    if(i==n-1 && j==n-1 ) return 1;
    if (i >= n || j>= n){
        return 0;
    }

    int right = 0;
    if(i<n &&  j+1<n &&arr[i][j+1]!='*')
    right = rec(i,j+1);

    int down = 0;
    if(i+1<n &&  j<n &&arr[i+1][j]!='*')
    down = rec(i+1,j);

    return right + down;

}
int main(){

    cin>>n;
    arr.resize(n,vector<char>(n));
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<n ; j++){
            cin>> arr[i][j];
        }
    }
    int ans = rec(0,0);
    cout<<ans;

}