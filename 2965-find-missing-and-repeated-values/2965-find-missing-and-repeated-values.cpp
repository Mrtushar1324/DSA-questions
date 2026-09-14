class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_set<int> m;
        int a, b;
        int n= grid.size();
        vector<int> ans;
        int actsum=0, expsum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n; j++){
                actsum +=grid[i][j];
                if(m.find(grid[i][j])!=m.end()){
                    a=grid[i][j];
                    ans.push_back(a);
                }
                m.insert(grid[i][j]);
            }
        }
        expsum=(n*n)*(n*n +1)/2;
        b=expsum+a-actsum;
        ans.push_back(b);
        return ans;
    }
};