class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int srow=x;
        int erow=x+k-1;
        int scol=y;
        int ecol=y+k-1;
        while(srow<erow){
             for(int j=scol;j<=ecol;j++){
                swap(grid[srow][j],grid[erow][j]);
            }
            srow++;
            erow--;
        }
        return grid;

    }
};