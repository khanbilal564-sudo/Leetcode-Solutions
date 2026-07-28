class Solution {
public:
    bool check(vector<int>& a) {
        int max=a[0];
        for(int i=0;i<a.size();i++){
            if(a[i]>=max) max=a[i];
            else if(max==a[0]){
                if(a[a.size()-1]==max){
                    for(int j=i+1;j<a.size();j++){
                    if(a[j]>=a[i] && a[j]>=a[j-1] && a[j]<=max) continue;
                    else return false;
                    }
                }
                else if(a[a.size()-1]<a[0]){
                    for(int j=i+1;j<a.size();j++){
                    if(a[j]>=a[i] && a[j]>=a[j-1] && a[j]<max) continue;
                    else return false;
                    }
                }
                else return false;
            }
            else{
                if(a[a.size()-1]>a[0]) return false;
                for(int j=i+1;j<a.size();j++){
                    if(a[j]>=a[i] && a[j]>=a[j-1] && a[j]<max) continue;
                    else return false;
                }
            }
        }
        return true;
    }
};