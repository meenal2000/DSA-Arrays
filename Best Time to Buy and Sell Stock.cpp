https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n < 2)
            return 0;
        int maxprofit = 0;
        int minprice = INT_MAX;
        for(int i=0;i<n;++i)
        {
            minprice = min( minprice, prices[i]);
            maxprofit = max(maxprofit, prices[i] - minprice);
        }
        return maxprofit;
    }
