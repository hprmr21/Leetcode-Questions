class Solution {
public:
    int maxi(vector<int>& nums){
        int maxi = 0;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            maxi = max(nums[i] , maxi);
        }
        return maxi;
    }
    int sumOfD(vector<int>& nums , int m){
            int sum = 0;
            int n = nums.size();
            for(int i = 0 ; i < n ; i++){
                sum += ceil((double)nums[i] / (double)m);
            }
            return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int low = 1;
        int high = maxi(nums);
        int ans = -1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(sumOfD(nums , mid) <= threshold){
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
    }
};