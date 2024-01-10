class StockSpanner {
public:
    
    stack<pair<int,int>>st;
    int i=0;
    StockSpanner() {
        
    }
    
    int next(int price) {
        if(st.empty()) 
            
        { st.push({price,i++});
         return 1;}
        
        else
        { 
            while(!st.empty()&&st.top().first<=price) 
            {
                
                st.pop();
            }
            int ans;
       if(st.empty()) ans=i+1;
            else
            {
                ans = i- st.top().second;
            }
            
            st.push({price,i++});
        return ans;
        }
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */