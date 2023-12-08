//#include <bits/stdc++.h>
#include <cmath>
#include <iostream> 
#include <algorithm>
#include <map>
#include <unordered_map>
#include <stack>
#include <queue>
#include <set>
#include <cstring>
#include <limits>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;
#define endl '\n'
#define yes cout<<"yes"<<'\n';
#define no cout<<"no"<<'\n';
#define int long long
const int MOD = 1e9 +7;
const int INF = LLONG_MAX>>1;
int gcd(int a, int b){
    while (true){
        if (a == 0) return b;
        b %= a;
        if (b == 0) return a;
        a %= b;
    }
}
int lcm(int a, int b){
    int temp = gcd(a, b);
    return temp ? (a / temp * b) : 0;
}

void solve(){
   
}
signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int tc  ; 
    cin>>tc;
    while(tc--){
       solve();
    }
}

