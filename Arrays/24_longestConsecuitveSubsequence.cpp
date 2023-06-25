//better solution
//algo 
// step 1 - sort the array 
// step 2 - check if arr[i] - 1 exist than inc count  and keep updating last smaller
// step 3 - if (arr[i] != last smaller ) 1 1 1 1 1 9 10 11 11 11 reset count to 1 and 
//         update the last smaller to arr[i];
//         keep a track of longest subsequence  

//         TC - O(nlogn) + O(n)
// https://leetcode.com/problems/longest-consecutive-sequence/
    int findLongestConseqSubseq(int arr[], int N)
    {
        sort(arr,arr+N);
        int lastsmaller = INT_MIN;//kuch aaisa liya jo ho na array mai
        int cnt =0;
        int longest = 1;
        for(int i = 0 ; i< N ;i ++){
            if(arr[i]-1 == lastsmaller){
                cnt++;
                lastsmaller= arr[i];
            }
            else if(lastsmaller != arr[i]){
                cnt = 1 ;
                lastsmaller = arr[i];
            }
            //else mai equal wala case bcha usme kuch ni krna  1 1 1 1 then we store only one count
            longest = max(longest , cnt); 
        }
        return longest;
    }


