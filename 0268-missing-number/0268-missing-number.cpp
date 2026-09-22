class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        map<int,int>freq;

        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        for(int i=0;i<=n;i++){
            freq[i]--;
            if(freq[i]==-1) return i;
        }
        return 0;
    }
};