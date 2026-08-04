class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n=nums.size();
    
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                if(j==i) continue;
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                    sum=1;
                } 
            }
            if(sum) break;
        }
        return ans;
        
    }
};