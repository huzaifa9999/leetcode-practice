class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    
    sort(intervals.begin(),intervals.end());
        
        // vector<vector<int>> ans;
          vector<vector<int>> res;
        res.push_back(intervals[0]);
        int l=intervals.size();
        int j=0;
        for(int i=1;i<l;i++)
        {
            if(res[j][1]>=intervals[i][0])
            {
               res[j][1]=max(res[j][1],intervals[i][1]);
                
            }
            else{
                res.push_back(intervals[i]);
                j++;
            }
        }    
        // ans.push_back(intervals[l-1]);
        
        return res;
    }
};