#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int findMax(vector<int> &piles){
        int maxi = INT_MIN ;
        for(int i = 0 ; i < piles.size() ; i++){
            maxi = max(maxi , piles[i]);
        }
        return maxi ;
    }
    long long total(vector<int> &piles , int k){
        long long totalH = 0 ;
        for(int i = 0 ; i < piles.size() ; i++){
            totalH += ceil((double)piles[i] / (double) k) ;
        }
        return totalH;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1 ;  
        int high = findMax(piles);
        while(low <= high){ 
            int mid = low + (high - low) / 2 ;
            long long totalH = total(piles , mid);
            if(totalH <= h){
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return low ;
    }
};