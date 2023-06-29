// https://leetcode.com/problems/sudoku-solver/
class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
    bool solve(vector<vector<char>>& board){
        for(int i = 0 ; i< 9 ; i++){
            for(int j =0 ; j<9 ; j++){
                if(board[i][j]!='.'){
                        char c = board[i][j];
                        board[i][j]='.';
                        if(!isValid(board,i,j,c)){
                            return false;
                        }
                      board[i][j]=c;
                    }else continue;
                }
            }
            return true;
        }
    }
    bool isValid(vector<vector<char>> &board ,int row , int col , char c){
        for(int i = 0 ; i< 9 ; i++){
            //row check
            if(board[row][i]==c){
                return false;
            }
            //col check 
            if(board[i][col]==c){
                return false;
            }
            //chcking the 3*3 matrix
            if(board[3* (row/3) +i/3][3* (col/3) + i%3]==c){
                return false;
            }
        }
        return true;
    }
};