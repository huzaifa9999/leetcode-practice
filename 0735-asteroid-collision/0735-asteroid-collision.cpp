class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        stack<int>st;
        for(int i=0;i<arr.size();i++)
        {
             if (!st.empty() && st.top() > 0 && arr[i] < 0) {
                while (!st.empty() && st.top() > 0 && st.top() < abs(arr[i])) {
                    st.pop(); // Positive asteroid destroyed by negative asteroid
                }
                if (!st.empty() && st.top() == abs(arr[i])) {
                    st.pop(); // Both asteroids annihilate each other
                    continue;
                }
                if (!st.empty() && st.top() > 0 && st.top() > abs(arr[i])) {
                    continue; // Negative asteroid destroyed by positive asteroid
                }
            }
            st.push(arr[i]); // No collision, push asteroid to stack
        }
        
        vector<int>ans;
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};