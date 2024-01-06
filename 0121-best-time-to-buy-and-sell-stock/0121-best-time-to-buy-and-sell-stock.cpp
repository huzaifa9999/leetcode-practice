class Solution {
public:
    int maxProfit(vector<int>& prices) {
   
        int ans=INT_MIN;
        int last=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            ans=max(ans,prices[i]-last);
            if(prices[i]<last)
            {
                last=prices[i];
            }
        }
        if(ans<0) return 0;
        return ans;
    }
};