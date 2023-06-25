// 215. Kth Largest Element in an Array

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //heap approach
        priority_queue<int, vector<int>, greater<int> > pq;
        for(int i = 0 ; i <k ; i++){
            pq.push(nums[i]);
        }
        for(int i = k ; i<nums.size() ; i++){
            if(nums[i] > pq.top()){
                pq.pop();
                pq.push(nums[i]);
            }
        }
        return pq.top();
    }
};

//kth smallest
//gfg https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1
//{ Driver Code Starts
//Initial function template for C++


class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        priority_queue<int >p;
        for(int i =0 ; i<k ; i++ ){
            p.push(arr[i]);
        }
        for(int i =k ; i<=r ; i++){
            if(arr[i]< p.top()){
                p.pop();
                p.push(arr[i]);
            }
        }
        int ans=p.top();
        return  ans;
    }
};


 

