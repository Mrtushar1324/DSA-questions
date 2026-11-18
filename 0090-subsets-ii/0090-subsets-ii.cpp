class Solution {
public:
    void getsubs(vector<int>& nums, int i , vector<int>& ans,vector<vector<int>>& allsubs){
        if(i==nums.size()){
            allsubs.push_back({ans});
            return;
        }
        ans.push_back(nums[i]);
        getsubs(nums, i+1, ans , allsubs);

        ans.pop_back();
        int idx=i+1;
        while(idx <nums.size() && nums[idx]==nums[idx-1]) idx++;

        getsubs(nums, idx, ans , allsubs);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> allsubs;
        vector<int> ans;
        getsubs(nums , 0, ans , allsubs);
        return allsubs;

        
    }
};