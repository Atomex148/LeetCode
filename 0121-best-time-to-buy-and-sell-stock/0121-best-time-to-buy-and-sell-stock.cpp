class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        int minprice = numeric_limits<int>::max();

        for (int price : prices) {
            if (price < minprice) minprice = price;
            int profit = price - minprice;
            if (profit > maxprofit) maxprofit = profit;
        }

        if (maxprofit < 0) return 0;
        return maxprofit;
    }
};