class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        
     vector<int>left(n,1);  
      
        int value=1;
        for(int i=1;i<n;i++){
            if(ratings[i]>ratings[i-1]){
                value++;
                left[i]=value;
            }
            else{
               value=1; 
            }
        }
        int right=1;
      
        int sum=0;
       
        for (int i = n - 2; i >= 0; i--) {
            if (ratings[i] > ratings[i + 1]) {
                right++;
            } else {
                right = 1;
            }
            sum += max(left[i], right);
        }

       
        return sum+max(1,left[n-1]);

    }
};