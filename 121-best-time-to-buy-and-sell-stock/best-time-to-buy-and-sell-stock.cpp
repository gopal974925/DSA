class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int max_profit = 0;
        int min_price = prices[0];
        
        for (int price : prices) {
            // Update the lowest price encountered so far
            min_price = min(min_price, price);
            
            // Calculate current profit and update max_profit if it's higher
            max_profit = max(max_profit, price - min_price);
        }
        
        return max_profit;  
    }
};