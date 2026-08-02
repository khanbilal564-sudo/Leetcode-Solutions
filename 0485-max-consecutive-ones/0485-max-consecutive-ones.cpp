class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,max_count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                if(i==nums.size()-1) break;
                if(nums[i+1]==0 && count>max_count){
                    max_count=count;
                    count=0;
                }
            }
            else{
                count=0;
            }
        }
        if(count>=max_count) max_count=count;
        return max_count;

    }
};