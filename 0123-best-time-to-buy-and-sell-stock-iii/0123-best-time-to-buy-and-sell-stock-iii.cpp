class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int buyonce=INT_MAX;
        int buytwice=INT_MAX;
        int sell1=0,sell2=0;
        
        for(auto &it:prices)
        {
            buyonce=min(buyonce,it);
            sell1=max(sell1,it-buyonce);
            buytwice=min(buytwice,it-sell1);
            sell2=max(it-buytwice,sell2);
            
        }
        
        return sell2;
        
    }
};