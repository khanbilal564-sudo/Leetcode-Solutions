class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        vector<int>temp(n);
        for(int i=0;i<n;i++){
            temp[i]=nums[(i+n-k)%n];
        }
        for(int i=0;i<n;i++){
            nums[i]=temp[i];
        }
    }
};