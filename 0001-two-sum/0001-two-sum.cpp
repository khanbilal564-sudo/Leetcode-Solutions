class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int,int>map;
        int n=arr.size();
        for(int i=0;i<n;i++){
            int complement=target-arr[i];
            if(map.find(complement)!=map.end()){
                return {i,map[complement]};  
            }
            else map[arr[i]]=i;  
        }
        return {-1,-1};  
    }
};