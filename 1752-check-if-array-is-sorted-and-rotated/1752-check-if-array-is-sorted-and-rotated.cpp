class Solution {
public:
    bool check(vector<int>& arr){
	for(int x=0;x<arr.size();x++){
        vector<int>brr;
		for(int i=0;i<arr.size();i++){
			int ele=arr[(i+x)%arr.size()];
            brr.push_back(ele);
		}
        int count=0;
        for(int i=1;i<brr.size();i++){
            if(brr[i]<brr[i-1]){
                count++;
                break;
            }
        }
        if(count==0) return true;
    }
    return false;
}
};