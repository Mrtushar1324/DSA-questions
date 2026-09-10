class Solution {
public:
    bool isalpha(char p){
        if((p>='0' && p<='9') || (tolower(p)>='a' && tolower(p)<='z')){
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        int strt =0, end=s.length()-1;
        
        while(strt<=end){
            if(!isalpha(s[strt])){
                strt++;
                continue;
            }
            if(!isalpha(s[end])){
                end--;
                continue;
            }
            if(tolower(s[strt])!=tolower(s[end])){
                return false;
            }
            strt++;
            end--;
            


        }
        return true;
    }
};