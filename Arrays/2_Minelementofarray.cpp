//goal is to find the min and max with least number of iterations 

//approach 1 :- sort the array and return first and last elemnts O(nlogn)

//approach 2 :- using a custom datatype 

// C++ program of above implementation

//similar leetcode question 
//2091. Removing Minimum and Maximum From Array

class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        // Initialize variables
        int maxi = nums[0], a = 0;
        int mini = nums[0], b = 0;
        int n = nums.size();

        // Find the maximum and minimum elements and their indices
        for (int i = 0; i < n; i++) {
            if (maxi < nums[i]) {
                maxi = nums[i];
                a = i;
            }
            if (mini > nums[i]) {
                mini = nums[i];
                b = i;
            }
        }

        

        // Swap the indices if the maximum element appears after the minimum element
        if (a > b) {
            swap(a,b);
        }

        // Calculate the minimum number of deletions required
        return min(min(n - b + a + 1, b + 1), n - a);
    }
};

#include <iostream>
using namespace std;


// structure is used to return
// two values from minMax()
struct Pair {
	int min;
	int max;
};

struct Pair getMinMax(int arr[], int low, int high)
{
	struct Pair minmax, mml, mmr;
	int mid;

	// If there is only one element
	if (low == high) {
		minmax.max = arr[low];
		minmax.min = arr[low];
		return minmax;
	}

	// If there are two elements
	if (high == low + 1) {
		if (arr[low] > arr[high]) {
			minmax.max = arr[low];
			minmax.min = arr[high];
		}
		else {
			minmax.max = arr[high];
			minmax.min = arr[low];
		}
		return minmax;
	}

	// If there are more than 2 elements
	mid = (low + high) / 2;
	mml = getMinMax(arr, low, mid);
	mmr = getMinMax(arr, mid + 1, high);

	// Compare minimums of two parts
	if (mml.min < mmr.min)
		minmax.min = mml.min;
	else
		minmax.min = mmr.min;

	// Compare maximums of two parts
	if (mml.max > mmr.max)
		minmax.max = mml.max;
	else
		minmax.max = mmr.max;

	return minmax;
}

// Driver code
int main()
{
	int arr[] = { 1000, 11, 445, 1, 330, 3000 };
	int arr_size = 6;

	struct Pair minmax = getMinMax(arr, 0, arr_size - 1);

	cout << "Minimum element is " << minmax.min << endl;
	cout << "Maximum element is " << minmax.max;

	return 0;
}

