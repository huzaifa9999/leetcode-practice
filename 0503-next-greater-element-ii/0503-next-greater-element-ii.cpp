class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        
        stack<int>st;
        vector<int>ans;
        for(int i=2*nums.size()-1;i>=0;i--)
        {
         while(!st.empty()&&st.top()<=nums[i%nums.size()]) st.pop();
            
            if(i<nums.size())
            {
            if(st.empty()) 
            ans.push_back(-1);
            // st.push(nums[i%nums.size()]);}
            else
            { ans.push_back(st.top());
                // st.push(nums[i%nums.size()]);
            
            }
             
            }
             st.push(nums[i%nums.size()]);
        
        } reverse(ans.begin(),ans.end());
        
        return ans;
        
    }
};