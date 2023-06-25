// https://leetcode.com/problems/trapping-rain-water/
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int left = 0 ;
        int right = n-1;
        int leftMax = 0;
        int RightMax = 0;
        int result = 0;

        while(left < right){
        if(height[left]<height[right]){
            if(height[left]>=leftMax) leftMax = height[left];

            else{
                result += leftMax - height[left];
                
            }
            left++;
        }
        else{
            if(height[right]>= RightMax) RightMax = height[right];

            else{
                result += RightMax - height[right];
            }
            right--;
        }
        }
        return result;
    }
};