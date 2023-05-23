class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        vector<int>positive;
        vector<int> negative;
        vector<int>result;
        for(auto &it: nums)
        {
            if(it<0)
            negative.push_back(it);
            else
            positive.push_back(it);
        }

        for(int i=0;i<positive.size();i++)
        {
result.push_back(positive[i]);
result.push_back(negative[i]);
        }
        return result;
    }
};