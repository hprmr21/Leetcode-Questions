class Solution {
public:
    bool isPossible(vector<int>& nums , int barrier , int k){
         int allocatedStudent = 1; 
         int pages = 0;
         for(int i = 0 ; i < nums.size() ; i++){
             if(nums[i] > barrier) return false;
             if(pages + nums[i] > barrier){
                 allocatedStudent++;
                  pages = nums[i];
             }
             else pages += nums[i];
         }
         if(allocatedStudent > k )return false;
         else return true;
    }
    int sum(vector<int>& nums){
        int sum = 0 ;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            sum += nums[i];
        }
        return sum;
    }
    int splitArray(vector<int>& nums, int k) {
        if(k > nums.size()) return -1;
        int low = *max_element(nums.begin(), nums.end());
        int high = sum(nums);
        int ans = -1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(isPossible(nums , mid , k)){
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1; 
        }
        return ans;
    }
};