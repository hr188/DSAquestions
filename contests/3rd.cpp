#include <map>
#include <unordered_map>
#include <stack>
#include <queue>
#include <set>
#include <iostream>
#include <cstring>
#include <limits>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;
long long MOD = 1e9+7;
int n ;
vector<int>arr;

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin >> N;
        if(N==1) cout<<0<<endl;
        int cnt = 0;
        for(int i = 2 ; i<=N ; i+=7){
            cnt++;
        }
        cout<<cnt<<endl;
    }
}