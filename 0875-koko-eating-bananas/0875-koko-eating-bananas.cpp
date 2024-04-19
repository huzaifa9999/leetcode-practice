class Solution {
public:
int findMax(vector<int> &piles) {
     int maxi = INT_MIN;
    long long int n = piles.size();
    //find the maximum:
    for (int i = 0; i < n; i++) {
        maxi = max(maxi, piles[i]);
    }
    return maxi;
}

long long int calculateTotalHours(vector<int> &piles, long long int speed) {
    long long int totalH = 0;
    long long int n = piles.size();
    //find total hours:
    for (int i = 0; i < n; i++) {
         long long val=piles[i];
        
        if(val<speed) totalH+=1;
        
        else if(val%speed==0) totalH+=(val/speed);   
        
        else totalH+=(val/speed)+1;

    }
    return totalH;
}
    int minEatingSpeed(vector<int>& piles, long long int h) {
           long long int low = 1, high = findMax(piles);
int ans=0;
    //apply binary search:
    while (low <= high) {
        long long int mid = (low + high) / 2;
        long long int totalH = calculateTotalHours(piles, mid);
        if (totalH <= h) {
            ans=mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return ans;
    }
};