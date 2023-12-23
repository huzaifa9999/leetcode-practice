class Solution {
public:
  int check(vector<int>& bloomDay, int m, int k,int mid)
    {
     vector<int>vec;
        for(auto &it:bloomDay)
        {
            if(it<=mid) vec.push_back(1);
            else vec.push_back(0);
        }
        int c=0;
        int ans=0;
        for(int i=0;i<vec.size();i++)
        { if(vec[i]==1)
        {
            c++;
            if(c==k) 
            {
                ans++;
                c=0;
            }
        }
         
            else
                c=0;
        
        }
      
      return ans;
        
            
    }
    
    int minDays(vector<int>& bloomDay, int m, int k) {
        
        long long tsize= (long long)(m) *(long long)(k);
        if((tsize)>bloomDay.size()) return -1;
        int high= *max_element(bloomDay.begin(),bloomDay.end());
        
        int low=1;
        int hue=-1;
        while(low<=high)
        {
int mid=low+(high-low)/2;
            
            int res=check(bloomDay,m,k,mid);
            if(res>=m) 
            { hue=mid;
                high=mid-1;
            }
            
       
            
            else
                low=mid+1;
        
        }
        return hue;
    }
};