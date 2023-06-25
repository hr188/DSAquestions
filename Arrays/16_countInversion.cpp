//https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1


//only updation while merging in else consition
class Solution{
public:
    // Function to merge two sorted arrays and count inversions
    long long int merge(long long arr[], long long temp[], long long s, long long mid, long long e) {
        }

        for (long long i = s; i <= e; i++) {
            arr[i] = temp[i];
        }

        return inversionCount;
    }

    // Function to divide the array and count inversions
    long long int mergeSort(long long arr[], long long temp[], long long s, long long e) {
        long long inversionCount = 0;

        if (s < e) {
            long long mid = s + (e - s) / 2;

            inversionCount += mergeSort(arr, temp, s, mid);
            inversionCount += mergeSort(arr, temp, mid + 1, e);

            inversionCount += merge(arr, temp, s, mid, e);
        }

        return inversionCount;
    }

    // Function to count inversions in the array
    long long int inversionCount(long long arr[], long long N) {
        long long temp[N];
        return mergeSort(arr, temp, 0, N - 1);
    }        long long len1 = mid - s + 1;
        long long len2 = e - mid;

        long long index1 = s; // Index of first subarray
        long long index2 = mid + 1; // Index of second subarray
        long long mainarr = s; // Index of merged array
        long long inversionCount = 0; // Count of inversions

        while (index1 <= mid && index2 <= e) {
            if (arr[index1] <= arr[index2]) {
                temp[mainarr++] = arr[index1++];
            } else {
                temp[mainarr++] = arr[index2++];
                inversionCount += (mid - index1 + 1); // Count inversions
            }
        }

        while (index1 <= mid) {
            temp[mainarr++] = arr[index1++];
        }

        while (index2 <= e) {
            temp[mainarr++] = arr[index2++];

};