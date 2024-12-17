class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
         int a=0;
        int temp=1;
         int flag=0;
        int n=arr.size();
        if(n<3)
        {
            flag=1;
        }
       
        for(int i=1;i<n;i++)
        {
            if(arr[i]>arr[i-1])
            {
               temp++;
            }
            else if(arr[i]==arr[i-1])
            {
                flag=1;
                break;
            }
            else
            {
                break;
            }
        }
        if(temp<=1||temp==n)
        {
            flag=1;
        }
        else
        {
            if(flag!=1)
            {
        for(int j=temp;j<n-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
             flag=1;
             break;
            }
            else if(arr[j]==arr[j+1])
            {
                flag=1;
                break;
            }
        }
        }
        }
      if(flag)
      return false;
      else
      return true; 
    }
};