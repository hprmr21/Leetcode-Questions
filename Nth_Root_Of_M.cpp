class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here
        int low = 0 ;
        int high = m;
        while(low <= high){
            int mid = (low + high) / 2;
            long long val = 1 ;
            for(int i = 0 ; i < n ; i++){
                val *= mid ;
                if( val > m ) break;
            }
            if( val == m)return mid ;
            else if(val < m) low = mid + 1;
            else high = mid - 1;
        }
         return -1;
    }
};