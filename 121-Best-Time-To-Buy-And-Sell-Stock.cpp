class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n < 2) return 0; // If there are fewer than 2 prices, return 0 

        int small_num = prices[0]; // Initialize the smallest number
        int max_profit = 0;        // Initialize the max profit
 
        // Loop through prices
        for (int i = 1; i < n; i++) {
            // Calculate profit if selling on day i
            int profit = prices[i] - small_num;

            // Update max profit if current profit is larger
            if (profit > max_profit) {
                max_profit = profit;
            }

            // Update the smallest number if a smaller value is found
            if (prices[i] < small_num) { 
                small_num = prices[i];
            }
        }

        return max_profit;
    }
};
