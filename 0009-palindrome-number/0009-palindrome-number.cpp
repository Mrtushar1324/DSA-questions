class Solution {
public:
    bool isPalindrome(int n) {
        int ans=0;
        int d=n;
        if(n<0){
            return false ;
        }
        while(n!=0){
            int s=n%10;
            n=n/10;
            if(ans>=INT_MAX/10 || ans<=INT_MIN/10){
                return false;
            }
            ans=ans*10+s;
        }
        if(ans==d){
            return true;
        }
        return false;
    }
};