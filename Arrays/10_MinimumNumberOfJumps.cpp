//45  https://leetcode.com/problems/jump-game-ii/submissions/979369627/
//approach O(n)
class Solution {
public:
    int jump(vector<int>& nums) {
        int jump =0;
        int pos =0;//current index ka track
        int next = 0;//destination of jump
        int n = nums.size();

        for(int i = 0; i < n-1 ; i++ ){
            next = max(next,nums[i]+i);
            if(pos==i){
                pos = next;//next position se pauchne se phle we look for all other possibillities 
                jump++;
            }
        }
        return jump;
    }
};