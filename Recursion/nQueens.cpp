class Solution {
private:
    bool isPossible(int row , int col , vector<string> &board , int n ){
        //in recursion we are traversing column wise that means from left to right 
        //so therefore we have to check only in the left side   <- Q
        // we are inserting q only once in a row 
        int dummyrow = row;
        int dummycol = col;

        while(row>=0 && col>=0){
            if(board[row][col]=='Q'){
                return false;
            }
            row--;
            col--;
        }

        col = dummycol;
        row = dummyrow;
        while(col>=0){
            if(board[row][col]=='Q'){
                return false;
            }
            col--;
        }
        col = dummycol;
        row = dummyrow;
        while(row<n && col>=0){
            if(board[row][col]=='Q'){
                return false;
            }
            row++;
            col--;
        }
        return true;
    }
public:
    void solve(int col ,int n ,vector<string> &board,vector<vector<string>> &ans){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row =0 ; row< n ; row++){
            if(isPossible(row,col,board,n)){
                board[row][col]='Q';
                solve(col+1,n,board,ans);
                board[row][col]='.';
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        string s(n,'.');
        vector<string> board(n);
        for(int i = 0 ; i <n ; i++){
            board[i]=s;
        }
        solve(0,n,board,ans);
        return ans;
    }
};