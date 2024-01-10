class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        vector<int>rl;
        vector<int>ll;
        int n=heights.size();
        for(int i=0;i<n;i++) //lesser histograms on the left
        {
            while(!st.empty()&&heights[st.top()]>=heights[i])
            {
                st.pop();
            }
        
        if(st.empty())
            ll.push_back(0);
            else
                ll.push_back(st.top()+1);
            st.push(i);
            
            
        }
        while(!st.empty()) st.pop();
            
        for(int i=n-1;i>=0;i--) //lesser histograms on the right
       {
            while(!st.empty()&&heights[st.top()]>=heights[i])
            {
                st.pop();
            }
        
        if(st.empty())
        rl.push_back(n-1);
            else
                rl.push_back(st.top()-1);
            st.push(i);
            
            
        }
        reverse(rl.begin(),rl.end());
        
        int ans=0;
     for(int i=0;i<n;i++)
     {
         ans=max(ans,((rl[i]-ll[i]+1)*heights[i]));
         
     }
        return ans;
        
        
    }
};