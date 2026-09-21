class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();

        int col0=1;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    if(j==0) col0=0;
                    else{
                        matrix[i][0]=0;
                        matrix[0][j]=0;
                    }
                }
            }
        }

        for(int i=m-1;i>=1;i--){
            for(int j=n-1;j>=1;j--){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }

        if(matrix[0][0]==0){
            for(int k=1;k<n;k++){
                matrix[0][k]=0;
            }
        }

        if(col0==0){
            for(int k=0;k<m;k++){
                matrix[k][0]=0;
            }
        }
    }
};