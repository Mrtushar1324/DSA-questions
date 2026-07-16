class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_prof=0;
        int bestBuy=prices[0];
        for(int i=0;i<prices.size();i++){
            if(prices[i]>max_prof){
                max_prof=max(max_prof,prices[i]-bestBuy);
            }
            bestBuy=min(bestBuy, prices[i]);
        }
        return max_prof;
        
    }
};