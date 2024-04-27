class Solution {
public:
    long long numberOfRightTriangles(vector<vector<int>>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();

    vector<int> onesInRow(rows, 0);
    vector<int> onesInCol(cols, 0);

    // Count ones in each row and column
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (grid[i][j] == 1) {
                onesInRow[i]++;
                onesInCol[j]++;
            }
        }
    }
    long long  count=0;
     for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (grid[i][j] == 1) {
                if(onesInRow[i]>1 && onesInCol[j]>1){
                    
                     count += (onesInRow[i]-1)*(onesInCol[j]-1);
                }
            }
        }
    }    
    return count; 
    }
};