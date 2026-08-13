class Solution {
public:
    int reverse(int x) {
        int a=0;
        int e=0;
        if(x>0){
            e=1;
        }else{
            e=0;
        }
        if(x==0){
            return 0;
        }
        while(x!=0){
            int b=x%10;
            if(a> INT_MAX/10 || a<INT_MIN/10){
                return 0;
            }
            x=x/10;
            a=(a*10)+b;
        }
        if(e==1){
            return a;
        }
        if(e==0){
            return a;
        }
        
        return 0;
    }
};