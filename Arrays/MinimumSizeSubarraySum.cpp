// in first while loop we make a window where sum is <target and
//  soon as we found that sum > target we start shrinking the window from 
//  left until we are able to keep sum > target  and keep updating the shortest.
//   we have use right - left +2 because when we exit the loop we have to add the
//    previous element +1 for it and +1 for r -l 

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = 0;
        int shortest = n+2;
        int sum = 0;

        while(right < n){
            sum += nums[right];
            if(sum>= target){
                while(sum>=target){
                    sum -= nums[left];
                    left++;
                }
                shortest = min(shortest, right - left +2);
            }
            right ++;
        }
        return shortest== n+2 ? 0 : shortest;
    }
};