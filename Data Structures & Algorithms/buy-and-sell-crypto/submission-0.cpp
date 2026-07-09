class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0;
        int maxP=0;

        for(int r=0; r < prices.size(); r++){
            if(prices[l]<prices[r]){
                int profit = prices[r]-prices[l];
                maxP = max(maxP,profit);
            }else{
                l=r;
            }
        }
        return  maxP;
    }
};
