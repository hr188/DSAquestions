// https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1
class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        unordered_map<int,int> m;
        int ans =0;
        for(int i = 0 ; i< n ;i++){
            int b = k -arr[i];
            if(m[b]){
                ans += m[b];
            }
            m[arr[i]]++;
        }
        return ans;
    }
};