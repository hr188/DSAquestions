//algorithm
// step 1 - build a min heap of all the first elements of all the lists 
//keep a track of the maximum elements while building the heap
//step 2 mai humne aage ke elements traverse krne hai while hum row to exit na kar de
//step 3 update maxi  and look for answer 
//code studio link https://www.codingninjas.com/codestudio/problems/smallest-range-from-k-sorted-list_1069356?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
//Date 6/06/2023


#include <limits.h>
#include <queue>
#include <vector>
class node {
    public:
    int data;
    int row;
    int col;

    node(int d , int r, int c){
        data = d;
        row = r;
        col = c ;
    }
};

//comparator class
class compare {
    public :
        bool operator()(node* a ,node* b){
            return a->data > b->data;
        }
};


int kSorted(vector<vector<int>> &a, int k, int n) {
    int mini = INT_MAX , maxi =INT_MIN;
    priority_queue<node*, vector<node*>, compare > minHeap;
    //step 1 
    for(int i = 0 ; i< k ;i++){
        int element  = a[i][0];
        mini = min(mini,element);
        maxi = max(maxi,element);
        minHeap.push(new node(element ,i ,0));
    }
    int start = mini;
    int end = maxi;
    //step 2
    while(!minHeap.empty()){
        node* temp = minHeap.top();
        minHeap.pop();

        mini = temp->data;
        
        //looking for smaller range and updation
        if(maxi - mini < end - start){
            start = mini;
            end = maxi;
        }

        if(temp->col +1 < n){
            maxi = max(maxi, a[temp->row][temp->col +1]);
            minHeap.push(new node (a[temp->row][temp->col+1],temp->row,temp->col+1));
        }
        else{
            break;
        }
    }
    return (end - start +1);
}



//link  for leetcode https://leetcode.com/problems/smallest-range-covering-elements-from-k-lists/description/


class node {
    public:
    int data;
    int row;
    int col;

    node(int d , int r, int c){
        data = d;
        row = r;
        col = c ;
    }
};
class compare {
    public :
        bool operator()(node* a ,node* b){
            return a->data > b->data;
        }
};
class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
            int mini = INT_MAX , maxi =INT_MIN;
    priority_queue<node*, vector<node*>, compare > minHeap;

    for(int i = 0 ; i<nums.size() ;i++){
        int element  = nums[i][0];
        mini = min(mini,element);
        maxi = max(maxi,element);
        minHeap.push(new node(element ,i ,0));
    }
    int start = mini;
    int end = maxi;

    while(!minHeap.empty()){
        node* temp = minHeap.top();
        minHeap.pop();

        mini = temp->data;

        if(maxi - mini < end - start){
            start = mini;
            end = maxi;
        }

        if(temp->col +1 < nums[temp->row].size()){
            maxi = max(maxi, nums[temp->row][temp->col +1]);
            minHeap.push(new node (nums[temp->row][temp->col+1],temp->row,temp->col+1));
        }
        else{
            break;
        }
    }
    return {start,end};
    }
};