//https://leetcode.com/problems/find-the-duplicate-number/

//every number will take us to new unique index only one pair is present which will return same number 
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i = 0; i<nums.size() ;i++){
            int number = abs (nums[i]);
            if(nums[number]>0){ //numbers range from 1 to n
            nums[number] = -1 *nums[number];
            }
            else{
                return number;
            }
        }
        return 0;
    }
};