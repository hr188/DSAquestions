// https://practice.geeksforgeeks.org/problems/smallest-subarray-with-sum-greater-than-x5651/1
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        int s = 0 ,e =0 , length = n+1,sum = 0;
        while(e<n){
            while(sum<=x && e<n){
                sum+= arr[e++];
            }
            while(sum> x && s < n){
                if(e-s < length){
                    length = e - s;
                }
                sum -= arr[s++];
            }
        }
        return length;
        
    }
};