#include <iostream>
#include <cstring>
#include <limits>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;

 int lengthOfLIS(vector<int>& nums) {

        int n  = nums.size();
        if(n==0){
            return 0;
        }
        vector<int> ans;
        ans.push_back(nums[0]);

        for(int i = 1 ; i<n ; i++){
            if(nums[i]> ans.back()){
                ans.push_back(nums[i]);
            }
            else{
                //find index of just Greater Element
                int index = lower_bound(ans.begin(), ans.end() , nums[i]) - ans.begin();
                ans[index] = nums[i];
            }
        }
        return ans.size();
    }
int main(){
    int n ; 
    cin>>n;
    vector<int> arr(n);
    int ans = 0 ; 
    for(int &val :arr ) {
        cin>>val;
    }
    ans = lengthOfLIS(arr);
    cout<<ans <<endl;
}