class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int size=nums.size();
        size=size-k;
      return nums[size];
    }
};