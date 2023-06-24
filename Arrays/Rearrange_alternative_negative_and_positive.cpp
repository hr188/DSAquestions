#include <iostream>
using namespace std;
void rightRotate(vector<int> &arr ,int n, int to , int from){
int temp = arr[to];
    for(int i = to; i>from  ;i--){
        arr[i]=arr[i-1];
        arr[from]=arr[to];
    }
}
void correctSequence (vector<int>&arr, int n){
    int outofplace = -1;
 
    for (int index = 0; index < n; index++) {
        if (outofplace >= 0) {
            // find the item which must be moved into the
            // out-of-place entry if out-of-place entry is
            // positive and current entry is negative OR if
            // out-of-place entry is negative and current
            // entry is positive then right rotate
            //
            // [...-3, -4, -5, 6...] -->   [...6, -3, -4,
            // -5...]
            //      ^                          ^
            //      |                          |
            //     outofplace      -->      outofplace
            //
            if (((arr[index] >= 0) && (arr[outofplace] < 0))
                || ((arr[index] < 0)
                    && (arr[outofplace] >= 0))) {
                rightRotate(arr, n,  index,outofplace);
 
                // the new out-of-place entry is now 2 steps
                // ahead
                if (index - outofplace >= 2)
                    outofplace = outofplace + 2;
                else
                    outofplace = -1;
            }
        }
    }
}

int main(){
    vector<int>arr(6);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(-4);
    arr.push_back(-1);
    arr.push_back(4);
    int n =6;
    correctSequence(arr,6);
    for(int  i = 0 ;i<n;i++ ){
        cout<<arr[i]<<" ";
    }


}