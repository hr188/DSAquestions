// https://leetcode.com/problems/subsets/
class Solution {
    private:
        void solve(vector<int> nums ,vector<int> tempo,vector<vector<int>> &ans ,int index ){
            if(index>=nums.size()){
                ans.push_back(tempo);
                return;
            }
            //include ki call
            tempo.push_back(nums[index]);
            solve(nums,tempo,ans,index+1);
            //exclude ki call
            tempo.pop_back();
            solve(nums,tempo,ans,index+1);
        }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> tempo;
        int index=0;
        solve(nums,tempo,ans,index);
        return ans;
    }
};