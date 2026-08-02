class Solution {
public:
   int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        set<int>st;
        int first=nums[0];
        int last=nums[n-1];
        int index=0;
        for(auto it:nums ){
            if(st.find(it)==st.end()){
                st.insert(it);
            

            nums[index]=it;
            index++;
            }
            
        } 
        return index;  
    }

};