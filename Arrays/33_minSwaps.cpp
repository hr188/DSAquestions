//sliding window 
//https://practice.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together4847/1

class Solution {
public:
    int minSwap(int arr[], int n, int k) {
        int fav = 0;
        int nonfav = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] <= k)
                fav++;
        }
        for (int i = 0; i < fav; i++) {
            if (arr[i] > k)
                nonfav++;
        }
        
        int res = nonfav;
        int l = 0, r = fav;
        while (r < n) {
            if (arr[l] > k)
                nonfav--;
            if (arr[r] > k)
                nonfav++;
            res = min(res, nonfav);
            l++;
            r++;
        }
        
        return res;
    }
};