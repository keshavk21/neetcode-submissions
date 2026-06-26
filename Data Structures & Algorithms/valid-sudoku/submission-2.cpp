class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> row(9);
        vector<unordered_set<char>> col(9);
        vector<unordered_set<char>> box(9);

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char cell =board[i][j];

                if(cell == '.') continue;
                if(row[i].count(cell)) return false;
                row[i].insert(cell);
                if(col[j].count(cell)) return false;
                col[j].insert(cell);

                int boxIdx = (i/3)*3+(j/3);
                if(box[boxIdx].count(cell)) return false;
                box[boxIdx].insert(cell);
            }
        }
        return true;
    }
};
