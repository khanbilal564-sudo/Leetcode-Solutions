class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(auto it:nums){
            mpp[it]++;
        }
        for(auto it:nums){
            if(mpp[it]>nums.size()/2){
                return it;
            }
        }
        return -1;
    }
};