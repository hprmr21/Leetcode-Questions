class Solution {
public:
    int maxi(vector<int>& weights){
        int maxi = 0;
        int n = weights.size();
        for(int i = 0 ; i < n ; i++){
            maxi = max(weights[i] , maxi);
        }
        return maxi;
    }
    int sum(vector<int>& weights){
        int sum = 0;
        for(int i = 0 ; i < weights.size() ; i++){
                sum += weights[i];
        }
        return sum;
    }
    int findDays(vector<int>& weights , int cap){
        int days = 1 , load = 0;
        for(int i = 0 ; i < weights.size() ; i++){
            if(weights[i] + load > cap){
                days++;
                load = weights[i];
            }
            else load += weights[i];
        }
        return days;
        
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = maxi(weights);
        int high = sum(weights);
        while(low <= high){
            int mid = (low + high) / 2;
            int numberOfDays = findDays(weights , mid);
            if(numberOfDays <= days){
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return low;
    }
};