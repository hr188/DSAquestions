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
#define int long long
const int MOD = 1e9 +7;
const int INF = LLONG_MAX>>1;
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int tc  ; 
    cin>>tc;
    while(tc--){
        int a, b, c;
        cin >> a >> b >> c;
        cout<< 1-(abs(b-c))%2<<" "<<1-(abs(a-c))%2<<" "<<1-(abs(a-b))%2<<endl;
    }  
}