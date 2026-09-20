class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        vector<pair<int,int>> index;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){          
                if(matrix[i][j]==0) index.push_back({i,j});
            }
        }

        for(int i=0;i<index.size();i++){
            for(int j=0;j<n;j++){
                matrix[index[i].first][j]=0;
            }
            for(int k=0;k<m;k++){
                matrix[k][index[i].second]=0;
            }
        }
    }
};