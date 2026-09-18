class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int pivot=n-2;

        int flag=0;

        for(int i=n-2;i>=0;i--){
            if(nums[i+1]>nums[i]){
                pivot=i;
                flag=1;
                break;
            }
        }

        if(flag==0) reverse(nums.begin(),nums.end());

        else{
            for(int i=n-1;i>=pivot+1;i--){
                if(nums[i]>nums[pivot]){
                    swap(nums[i],nums[pivot]);
                    break;
                }
            }

        reverse(nums.begin()+pivot+1,nums.end());
        }

        return;
        
    }
};