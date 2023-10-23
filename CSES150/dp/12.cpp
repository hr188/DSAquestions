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
    int sum = 0 ; 
    for(int &val :arr ) {
        cin>>val;
        sum += val;
    }
    vector<int>reachable(sum+1, 0);
    reachable[0]=1;
    for(int i = 0 ; i<n ; i++){
        for(int j = sum ; j>=arr[i] ; j-- ){
            reachable[j] |= reachable[j-arr[i]];
        }
    }
    int cnt =0;
    vector<int> op;
    for(auto i : reachable){
        if(i==1) {
        cnt++;
        op.push_back(i);
        }
    }
    cout<<cnt-1<<endl;
    for(int i =1 ; i<reachable.size() ; i++){
        if(reachable[i]==1){
            cout<<i<<" ";
        }
    }

}
