// https://leetcode.com/problems/subsets-ii/
class Solution {
public:
void recur(vector<int>&nums,int i,set<vector<int>>&s,vector<int>&v)
{
    if(i==nums.size()){s.insert(v);
    return ;   
    }
    v.push_back(nums[i]);
    recur(nums,i+1,s,v);
    v.pop_back();
    recur(nums,i+1,s,v);
    s.insert(v);


}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(),nums.end());
        set<vector<int>>s;
        vector<vector<int>>ans;
        vector<int>v;
        recur(nums,0,s,v);
        for(auto i:s)ans.push_back(i);
        return ans;

        
    }
};