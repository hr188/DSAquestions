// gfg  https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1
void rotate(int arr[], int n)
{
    int arr1[n];
    for(int i =0 ; i<n ; i++ ){
        arr1[(i+1)%n] = arr[i];
    }
    for(int i =0 ; i<n ; i++ ){
        arr[i] = arr1[i];
    }
}

//leetcode https://leetcode.com/problems/rotate-array/
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> ans(nums.size());
        for(int i = 0; i <nums.size() ;i++){
            ans[(i+k)%nums.size()] = nums[i];
        }
        nums = ans;
    }
};