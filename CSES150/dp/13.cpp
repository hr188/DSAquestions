#include <iostream>
#include <cstring>
#include <limits>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n ; 
    cin>>n;
    vector<int> arr(n);
    int ans = 0 ; 
    for(int &val :arr ) {
        cin>>val;
    }
    ans = BottomUp(arr);
    cout<<ans <<endl;
}