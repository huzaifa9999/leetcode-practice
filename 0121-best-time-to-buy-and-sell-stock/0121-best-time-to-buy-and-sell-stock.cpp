class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
     int profit=0,lowest=*max_element(prices.begin(), prices.end());

        
     for(int i=0;i<n;i++){
        lowest=min(lowest,prices[i]);
        profit=max(profit,prices[i]-lowest);
     }
        return profit;
        
        
    }
};