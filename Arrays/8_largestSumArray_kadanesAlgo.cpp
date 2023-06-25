// gfg https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
//kadanes algorithm 
long long maxSubarraySum(int arr[], int n){
        
    long long sum = 0;
    long long maxi = arr[0];

    for(int i = 0; i < n; i++) {
        sum += arr[i];
        maxi = max(maxi, sum);

        if(sum < 0) {
            sum = 0;
        }
    }

    return maxi;
        
    }

    //leetcode https://leetcode.com/problems/maximum-subarray/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxi = nums[0];

        for(int i = 0 ; i<nums.size() ;i++){
            sum += nums[i];
            maxi = max(maxi,sum);

            if(sum<0){
                sum = 0;
            }
        }
        return maxi;
    }
};
