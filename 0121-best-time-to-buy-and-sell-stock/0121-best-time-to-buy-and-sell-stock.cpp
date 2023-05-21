class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
     int profit=0,curr=0,
        lowest=1e9;

        
     for(int i=0;i<n;i++){
        lowest=min(lowest,prices[i]);
         curr=prices[i]-lowest;
        profit=max(profit,curr);
     }
        return profit;
        
        
    }
};