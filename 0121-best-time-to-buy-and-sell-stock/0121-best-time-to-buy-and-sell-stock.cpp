class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int prof=0;
        int buy=prices[0];
        for(int i=0 ; i<=prices.size()-1; i++){
            if(prices[i]>prof){
                prof =max(prof, prices[i]-buy);
            }
            buy=min(buy , prices[i]);
        }
        return prof;
        
    }
};