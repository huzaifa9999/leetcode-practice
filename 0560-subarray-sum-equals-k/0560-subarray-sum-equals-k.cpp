class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
  unordered_map<int,int> m;
        int count=0;
        int sum=0;
        m[sum]=1;
        for(auto &it:nums){
            sum+=it;
            int residue=sum-k;
            if(m[residue])
                count+=m[residue];
                   m[sum]++;
        }
        
        return count;
        
    }
};