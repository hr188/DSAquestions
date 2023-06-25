  // https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 /* approach
 1.initialize mini and maxpro
 2. check for maximum profit and mini keep updating them
 */ 
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX;
        int maxpro = 0;
        for(int i = 0 ;i <prices.size() ; i++){
           mini = min(mini , prices[i]);
           maxpro = max(maxpro , prices[i]- mini );
        }
        return maxpro;
    }
};