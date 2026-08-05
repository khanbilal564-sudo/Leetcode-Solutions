class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n=arr.size();
        vector<pair<int,int>> arrwithindex;
        for(int i=0;i<n;i++){
            arrwithindex.push_back({arr[i],i});
        }
        sort(arrwithindex.begin(),arrwithindex.end());
        int left=0,right=n-1;
        while(left<right){
            int sum=arrwithindex[left].first+arrwithindex[right].first;
            if(sum==target) return {arrwithindex[left].second,arrwithindex[right].second};
            if(sum>target) right--;
            if(sum<target) left++;
        }
        return {-1,-1};

    }
};