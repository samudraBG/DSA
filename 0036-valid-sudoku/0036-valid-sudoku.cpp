class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> st;
        
        for(int i = 0; i<9; i++) {
            for(int j = 0; j<9; j++) {
                if(board[i][j] == '.') continue;
                
                string row = string(1, board[i][j]) + "_row_" + to_string(i);
                string col = string(1, board[i][j]) + "_col_" + to_string(j);
                string box = string(1, board[i][j]) + "_box_" + to_string(i/3) + "_" + to_string(j/3);
                if(st.count(row) || st.count(col) || st.count(box)) return false;
                st.insert(row);
                st.insert(col);
                st.insert(box);
            }
        }
        
        return true;
    }
};
// class Solution {
// public:
//     bool isValidSudoku(vector<vector<char>>& board) {

//         for (int row = 0; row < 9; row++) {
//             for (int col = 0; col < 9; col++) {

//                 if (board[row][col] == '.')
//                     continue;

//                 char current = board[row][col];

//                 // Check Row
//                 for (int j = 0; j < 9; j++) {
//                     if (j != col && board[row][j] == current)
//                         return false;
//                 }

//                 // Check Column
//                 for (int i = 0; i < 9; i++) {
//                     if (i != row && board[i][col] == current)
//                         return false;
//                 }

//                 // Check 3x3 Box
//                 int startRow = (row / 3) * 3;
//                 int startCol = (col / 3) * 3;

//                 for (int i = startRow; i < startRow + 3; i++) {
//                     for (int j = startCol; j < startCol + 3; j++) {
//                         if ((i != row || j != col) && board[i][j] == current)
//                             return false;
//                     }
//                 }
//             }
//         }

//         return true;
//     }
// };