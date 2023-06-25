// VVVVIMP  gfg https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1
class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
    sort(arr,arr+n);
    
    int ans = arr[n-1] -arr[0];
     
    int mini = arr[0]+k;
    int maxi = arr[n-1]-k;
    int mi ,ma;
    
    
    for(int i =0 ; i<n ;i++){
        mi = min(mini ,arr[i+1]-k);
        ma = max(maxi ,arr[i]+k);
        
        if(mi<0) continue;
        
        ans = min(ans,ma-mi);
    }
    return ans;
    }
};