//algorithm 
//step 1 = traverse from back and find out the first breakpoint where nums[k]<nums[k+1]
//step 2 = check if there is such point if not reverse the array and return 
//step 3 = again traverse from back and find a point where nums[l]>nums[k](step 1 ka breakpint)
//step 4 = swap the values obtain in steps 1 and 3
//step 5 = reverse the array from k(step2) to end point 
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(),k,l;
        for(k = n-2 ; k>=0 ;k--){
            if(nums[k]<nums[k+1]){
                break;
            }
        }
        if(k<0){
            reverse(nums.begin(),nums.end());
        }
        else{
            for(l = n-1 ; l>k ;l--){
                if(nums[l]>nums[k]){
                    break;
                }
            }
            swap(nums[k],nums[l]);
            reverse(nums.begin()+1+k ,nums.end());
        }
    }
};