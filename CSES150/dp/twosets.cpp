#include <iostream>
#include <cstring>
#include <limits>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;

int solve (vector<int>&nums , int sum ) {
      
}
int main(){
    int n ; 
    cin>>n;
    vector<int> arr(n);
    int64_t sum = 0;
    for(int i =1 ; i<=n ; i++){
        arr[i]= i;
        sum+=i;
    }
    int ans = solve(arr, sum/2);
    cout<<ans <<endl;
}