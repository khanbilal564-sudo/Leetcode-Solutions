class Solution {
public:
    bool check(vector<int>& arr){
    int n=arr.size();
	for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            int x=i;//the number of rotations
            int temp[n];
            for(int j=0;j<n;j++){
                temp[j]=arr[(j+x)%n];
            }

            for(int j=1;j<n;j++){
                if(temp[j]<temp[j-1]){
                    return false;
                }
            }    
        }
    }
    return true;
}
};