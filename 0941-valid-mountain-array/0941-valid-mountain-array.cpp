class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
         int n=arr.size();

        //if only single element is given
        //i.e., only decreasing condition is there...
        if(n==1)
        return false;

//now checking for rest of the cases which could return false
        int increasing=1;
        for(int i=1;i<n;i++){
            //if increasing change to 0 i.e, if decreasing array is there or not
            if(arr[i]<arr[i-1]){         //checking condition
                if(i==1){                //always decr. case
                    return false;
                }

                increasing=0;
            }

//this checks if incr. condn. gets violated (since there is equal to sign)
            if(increasing){
                if(arr[i]<=arr[i-1]){
                    return false;
                }
            }
            //same as above condition
            else{
                if(arr[i]>=arr[i-1]){
                    return false;
                }
            }
        }

        //always increasing condition so returns false as it is not a valid mountain
        if(increasing==1)
        return false;

/*otherwise return true i.e, after checking all the possible conditions that can make
an array not a valid mountain it returns true at the end*/
        return true;
    }
};