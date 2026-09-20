class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int m=matrix.size(),n=matrix[0].size();
        if(m==0 && n==0) return;
        
        vector<int> col_arr(n,0),row_arr(m,0);

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
               if(matrix[i][j]==0){
                row_arr[i]=1;
                col_arr[j]=1;
               }
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(row_arr[i] || col_arr[j]){
                    matrix[i][j]=0;
                }
            }
        }
    }
};