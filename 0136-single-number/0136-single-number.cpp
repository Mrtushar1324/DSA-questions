class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int vec:nums){
            ans=ans^vec;
        }
        return ans;
        
    }
};