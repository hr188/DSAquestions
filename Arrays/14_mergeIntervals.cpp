// imppp  https://leetcode.com/problems/merge-intervals/
//algo 1.Sort the given intervals
// 2. Add the first pair in temp pair vector
// 3. start iterating and check if the interval merges if it does update the pair;
// 4. if it does not merge add into answer and update pair to intervals[i]
// 5. at the end add the last interval in the answer
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> mergeIntervals;
        if(intervals.size()==0){
            return mergeIntervals;
        }
        sort(intervals.begin(),intervals.end());
        vector<int> pair = intervals[0];

        for(auto it:intervals){
            if(it[0]<= pair[1]){//checking if the intervals are merging [1,3],[2,6] first value is less than< pair[1]
                pair[1]=max(it[1],pair[1]); //updating merged interval 
            }
            else{
                mergeIntervals.push_back(pair);
                pair = it;
            }  
        }
        mergeIntervals.push_back(pair);  //pushing last pair in the answer
        return mergeIntervals;
    }
};