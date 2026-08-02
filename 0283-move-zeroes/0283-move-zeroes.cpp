class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==0 || nums.size()==1) return;
        int zero=0;
        for(int i=0;i<nums.size();i++){                                                                             
            if(nums[i]!=0){
                nums[zero]=nums[i];
                zero++;
            }

        }
        for(int i=zero;i<nums.size();i++){
            if(nums[i]!=0) nums[i]=0;
        }
        
    }
};