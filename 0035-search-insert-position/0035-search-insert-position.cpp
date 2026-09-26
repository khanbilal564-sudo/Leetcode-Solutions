class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n= nums.size();
        int low=0,high=n-1;
        int index=n;

        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid] == target) return mid;
            if(nums[mid] < target){
                if(mid > index) index=mid+1;
                low=mid+1;
            }
            else{
                if(mid < index) index=mid;
                high=mid-1;
            }
        }
        return index;
    }
};