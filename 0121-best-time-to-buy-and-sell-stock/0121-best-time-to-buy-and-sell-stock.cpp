class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
     int profit=0,curr=0,lowest=*max_element(prices.begin(), prices.end());

        
     for(int i=0;i<n;i++){
         if(prices[i]<lowest)
         {lowest=prices[i];}
         curr=prices[i]-lowest;
         if(profit<curr){
             profit=curr;
         }
     }
        return profit;
        
        
    }
};