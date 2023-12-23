class Solution {
public:
    int check(vector<int>& weights,int mid)
    {
        int sum=0;
        int count=1;
        for(auto &it:weights)
        { 
            if(sum+it<=mid) {sum+=it;}
            else
            {
                if(it>mid) return INT_MAX;
                count++;
               sum=it;
                
            }
            
        }
        
        return count;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        
        int high=0;
        // int high= days*(*max_element(weights.begin(),weights.end()));
         for ( int i = 0 ; i < weights.size() ; i++ ) {
            high += weights[i] ;
        }

        int low=1;
        int ans=0;
        while(low<=high)
        { int mid =low+(high-low)/2;
         
            int res=check(weights,mid);
         if(res<=days) {
             ans=mid;
            high=mid-1;
         }
         else low=mid+1;
         
        }
        return ans;
        
    }
};