class Solution {
public:
    int singleNonDuplicate(vector<int>& n) {
        int str=0, end=n.size()-1;
        if(n.size()==1){
            return n[0];
        }
        while(str<=end){
            int mid=str+(end-str)/2;
            if(mid==0 && n[mid]!=n[1]){
                return n[mid];
            }
            if(mid==n.size()-1 && n[mid]!=n[mid-2]){
                return n[mid];
            }
            if(n[mid-1]!=n[mid] && n[mid]!=n[mid+1]){
                return n[mid];
            }
            if(mid%2==0){
                if(n[mid-1]==n[mid]){
                    end=mid-1;
                }
                else{
                    str=mid+1;
                }
            }else{
                if(n[mid-1]==n[mid]){
                    str=mid+1;
                }else{
                    end=mid-1;
                }
            }
        }
        return -1;
        
    }
};