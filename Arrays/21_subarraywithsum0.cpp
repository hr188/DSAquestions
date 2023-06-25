//prefix sum approach if two subarrays have equal presum //than there exist a subarray whose sum must have been 0\
// https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1
class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        unordered_set<int> s;
        int preSum = 0;
        
        for(int i  = 0 ; i < n ; i++ ){
            preSum += arr[i];
            
            if(preSum ==0) 
            return true;
            
            if(s.find(preSum) != s.end())
            return true;
            
            s.insert(preSum);
        }
        return false;
    }
};
