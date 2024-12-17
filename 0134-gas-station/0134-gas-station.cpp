class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
           int n = gas.size();

        // determining if answer is possible
        int totalGas = 0;
        int totalCost = 0;
        for(int i = 0; i < n; i++){
            totalGas += gas[i];
            totalCost += cost[i];
        }
        if(totalGas < totalCost){
            return -1;
        }

        // now when answer is possible
        int remainingGas = 0;
        int start = 0;
        for(int i = 0; i < n; i++){
            remainingGas = remainingGas + (gas[i] - cost[i]);
            if(remainingGas < 0){
                // start = (i + 1) % n;
                start = i + 1;
                remainingGas = 0;
            }
        }
        return start;
    }
};