/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
#include<iostream>
#include <vector>
#include<map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> ixs;
        for(int i = 0; i < nums.size(); i++){
            int complement = target - nums[i];
            if(ixs.find(complement) != ixs.end()){
                return vector<int> {i, ixs[complement]};
            }
            ixs[nums[i]] = i;
        }
        return vector<int> {};
    }
};
// @lc code=end

