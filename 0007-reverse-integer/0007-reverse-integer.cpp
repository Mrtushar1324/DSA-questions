class Solution {
public:
    int reverse(int x) {
        int ans=0;
        if(x==0){
            return 0;
        }
        while(x!=0){
            int b= x%10;
            x=x/10;
            if(ans<INT_MIN/10 || ans>INT_MAX/10){
                return 0;
            }
            ans=ans*10+b;
        }
        return ans;

    }
};