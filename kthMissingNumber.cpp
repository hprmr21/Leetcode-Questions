class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        // int n = arr.size();
        // for(int i = 0 ; i < n ; i++){
        //     if(arr[i] <= k)k++;
        //     else break;
        // }
        // return k;
        int low = 0 ;
        int high = arr.size() - 1;
        while(low <= high){
            int mid = (low + high) / 2;
            long long missing = arr[mid] - (mid + 1);
            if(missing < k) low = mid + 1;
            else high = mid - 1;

        }
        return (high + 1 + k);
    }
};