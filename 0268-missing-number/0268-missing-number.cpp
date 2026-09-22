class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            if(nums[0]==1) return 0;
            else return 1;
        }

        sort(nums.begin(),nums.end());

        if(nums[0]!=0) return 0;
        for(int i=1;i<n;i++){
            if(nums[i]!=i && nums[i-1]!=i) return i;
            if(i+1==n) return n;
        }
        return 0;
    }
};