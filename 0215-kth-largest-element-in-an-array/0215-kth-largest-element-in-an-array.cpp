class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>>pq;
        
        for(auto &it:nums)
        {
            pq.push(it);
        }
        int ans=0;
        while(k--)
        {
            ans=pq.top();
            pq.pop();
        }
        return ans;
    }
};