class Solution {
public:
    bool isValid(string s) {
        
        stack<char>st;
        if(s.size()==1) return false;
        if(s.size()%2!=0) return false;
        for(auto &it:s)
        {
            if(it=='('||it=='['||it=='{')
                st.push(it);
            
            else 
            {
                if(!st.empty())
                {
                char check=st.top();
                if((check=='('&&it==')')||(check=='['&&it==']')||(check=='{'&&it=='}'))
                    st.pop();
                else
                    return false;
                }
                else return false;
                
                
            }
        }
        
        if(!st.empty()) return false;
        return true;
        
    }
};