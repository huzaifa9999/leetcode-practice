class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set <int> s(nums1.begin(),nums1.end());
int m;vector<int> c;
        for(auto &it:nums2)
        {
        // s.count(it);
        if(s.count(it))
        {
c.push_back(it);
s.erase(it);
        }

        }

        return c;
    }
};