class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      if(nums.size()==0 || nums.size()==1) return;  
      int i=-1;
      for(int j=0;j<nums.size();j++){
        if(nums[j]==0){
            i=j;
            break;
        }
      }
      if(i==-1) return;

      for(int j=i+1;j<nums.size();j++){
        if(nums[j]!=0){
            swap(nums[j],nums[i]);
            i++;
        }
      }
        
    }
};