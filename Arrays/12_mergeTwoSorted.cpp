// 88 https://leetcode.com/problems/merge-sorted-array/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1;
        int j = n - 1;
        int total = m + n - 1;

        while (total >= 0) {

            if (i >= 0 && j >= 0) {

                if (nums1[i] >= nums2[j]) {
                    nums1[total--] = nums1[i--];
                } else {
                    nums1[total--] = nums2[j--];
                }
            } else if (j >= 0) {
                nums1[total--] = nums2[j--];

            } 
            else break;

        }
    }
};