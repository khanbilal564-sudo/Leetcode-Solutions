class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        vector<int> hash(3);
        for(int i=0;i<n;i++){
            hash[nums[i]]++;;
        }
        int i=0;
        while(hash[0]--){ 
        nums[i]=0;
        i++;
        }
        while(hash[1]--){ 
        nums[i]=1;
        i++;
        }
        while(hash[2]--){ 
        nums[i]=2;
        i++;
        }
        
        
    }
};