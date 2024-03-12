class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
        
        st.push(num[0]);
        for(int i=1;i<num.size();i++)
        {
            while(!st.empty()&&st.top()>num[i]&&k>0)
            {
               k--;
                st.pop();
            }
            
            st.push(num[i]);
        }
         while(!st.empty() && k > 0){
            k--;
            st.pop();
        }
        string ans="";
        
        while(!st.empty()) 
        {ans+=st.top();st.pop();}
        
        bool f= false;
        
        for(int i=0;i<ans.size();i++) st.push(ans[i]);
        ans="";
        while(!st.empty())
        {
            if(st.top()=='0'&&!f)
            {
                st.pop();
            }
            else
            {
                f=true;
                ans+=st.top();
                st.pop();
            }
        }
        if(ans.size()==0) return "0";
        
        return ans;
        
        
    }
};