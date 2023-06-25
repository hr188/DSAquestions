//https://leetcode.com/problems/subarray-sum-equals-k/
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int presum = 0,cnt =0;
        unordered_map<int,int> m;//presum ,count of occurences of presum
        m[0]=1;
        for(int i =0 ; i< nums.size() ;i++){
            presum += nums[i];
            int remove = presum - k;
            cnt += m[remove];
            m[presum]+= 1;
        }
        return cnt;
    }
};