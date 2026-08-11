// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int str=1 , end=n;
        while(str<end){
            int mid=str+(end-str)/2;
            if(isBadVersion(mid)==true){
                end= mid;
            }else{
                str=mid+1;
            }
        
       }
            return str;
    }
};