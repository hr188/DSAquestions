// https://leetcode.com/problems/spiral-matrix/
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int total = row * col;

        int count = 0;
        int startingRow = 0;
        int endingRow = row - 1;
        int startingCol = 0;
        int endingCol = col - 1;
        vector<int> ans;

        while (count < total) {
            for (int index = startingCol; index <= endingCol; index++) {
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;
            for (int index = startingRow; index <= endingRow; index++) {
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;
            if (count < total) {
                for (int index = endingCol; index >= startingCol; index--) {
                    ans.push_back(matrix[endingRow][index]);
                    count++;
                }
            }
            endingRow--;
            if (count < total) {
                for (int index = endingRow; index >= startingRow; index--) {
                    ans.push_back(matrix[index][startingCol]);
                    count++;
                }
            }
            startingCol++;
        }
        return ans;
    }
};
