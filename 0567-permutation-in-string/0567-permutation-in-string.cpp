class Solution {
public:
    bool issame(int freq1[], int freq2[]){
        for(int i=0;i<26;i++){
            if(freq1[i]!= freq2[i]){
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
        for(int i=0; i<s2.length(); i++){
            int idx=i , windidx=0;
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