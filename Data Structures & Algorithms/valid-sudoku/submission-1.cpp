class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // 9 sets for rows, columns, and boxes
        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> cols(9);
        vector<unordered_set<char>> boxes(9);

        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                char cell = board[r][c];

                if (cell == '.') {
                    continue;
                }

                // Check row
                if (rows[r].count(cell)) {
                    return false;
                }
                rows[r].insert(cell);

                // Check column
                if (cols[c].count(cell)) {
                    return false;
                }
                cols[c].insert(cell);

                // Compute box index
                int boxIndex = (r / 3) * 3 + (c / 3);

                // Check 3x3 box
                if (boxes[boxIndex].count(cell)) {
                    return false;
                }
                boxes[boxIndex].insert(cell);
            }
        }

        return true;
    }
};