class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max=0;
        int minPrice=prices[0];
        int n=prices.size();
        for(int i=1;i<n;i++){
             if(prices[i] < minPrice) {
                minPrice = prices[i];
            }
                int profit=prices[i]-minPrice;
                if(profit > max){
                    max=profit;
            }
        }
        return max;
    }
};