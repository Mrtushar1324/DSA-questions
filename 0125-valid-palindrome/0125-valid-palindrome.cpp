class Solution {
public:
    bool alphanum(char ch){
        if((ch>='0' && ch<='9') ||
        (tolower(ch)>='a' && tolower(ch)<='z')){
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        int str=0, end =s.length()-1;
        while (str<end){
            if(!alphanum(s[str])){
                str++;
                continue;
            }
            if(!alphanum(s[end])){
                end--;
                continue;
            }
            if(tolower(s[str]) != tolower(s[end])){
                return false;
            }
            str++;
            end--;

        }
        return true;
    }
};