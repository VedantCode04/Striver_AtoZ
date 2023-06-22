//leetcode 121
// two pointer approach
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, j = 0;

        for(int i = 1; i < prices.size(); i++){
            if(prices[i] < prices[j]){
                 j = i;
            } else if (prices[i] > prices[j]){
                profit = max(profit, prices[i] - prices[j]);
            }
        }    

        return profit;    
    }
};
