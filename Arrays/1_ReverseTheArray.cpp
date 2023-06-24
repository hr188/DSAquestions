// https://leetcode.com/problems/reverse-string/ 

//using two pointer approach we can easily solve this problem with the help of two iterators start and end by just swapping them 
#include<iostream>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        int so=0;
        int e=s.size()-1;
        while(so<e){
            swap(s[so++],s[e--]);
        }
    }
};
