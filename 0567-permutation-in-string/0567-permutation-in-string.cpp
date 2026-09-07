class Solution {
public:
    bool issame(int b1[], int b2[]){
        for(int i=0; i<26;i++){
            if(b1[i]!=b2[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};
        for(int i=0; i<s1.length(); i++){
            freq[s1[i]-'a']++;
        }
        int windsize=s2.length();
        for(int i=0; i<s2.length();i++){
            int idx=i, windidx=0;
            int windfreq[26]={0};
            while(windidx<s1.length() && idx<s2.length()){
                windfreq[s2[idx]-'a']++;
                idx++;
                windidx++;
            }
            if(issame(freq, windfreq)){
                return true;
            }
        }
        return false;
        
    }
};