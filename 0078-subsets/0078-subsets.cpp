class Solution {
public:
    void allsub(vector<int>& nums , int i , vector<int>&current,vector<vector<int>>& allsubs){
        if(i==nums.size()){
            allsubs.push_back({current});            
            return;
        }
        current.push_back(nums[i]);
        allsub(nums, i+1, current,allsubs);
        current.pop_back();
        allsub(nums, i+1 , current, allsubs);
    
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allsubs;
        vector<int> current;
        allsub(nums,0,current, allsubs);
        return allsubs;
    }
};