#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int firstOccurrence(vector<int>& nums , int n , int target){
        int low = 0 ;
        int high = n - 1;
        int first = -1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(nums[mid] == target){
                first = mid ;
                high = mid - 1;
            }
            else if ( nums[mid] < target){
                low  = mid + 1;
            }
            else high = mid - 1 ;
        }
        return first ;
    }
    int lastOccurrence(vector<int>& nums , int n , int target){
        int low = 0 ;
        int high = n - 1;
        int last = -1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(nums[mid] == target){
                last = mid ;
                low = mid + 1 ;
            }
            else if ( nums[mid] < target){
                low  = mid + 1;
            }
            else high = mid - 1 ;
        }
        return last;
    }
    // int lowerBound(vector<int>& nums, int n ,int target) {
    //     // code here 
    //     int low = 0 ; 
    //     int high = n - 1;
    //     int ans = n ; 
    //     while(low <= high){
    //         int mid = (low + high) / 2;
    //         if(nums[mid] >= target){
    //             ans  = mid ;
    //             high = mid - 1;
                
    //         }
    //         else {
    //             low = mid + 1;
    //         }
    //     }
    //     return ans;
    // }
    // int upperBound(vector<int>& nums, int n , int target) {
    //     // code here
    //     int low = 0 ;
    //     int high = n - 1 ;
    //     int ans = n ;
    //     while( low <= high){
    //         int mid = (low + high) / 2;
    //         if(nums[mid] > target){
    //             ans = mid ;
    //             high = mid - 1;
    //         }
    //         else {
    //             low  = mid + 1;
    //         }
    //     }
    //     return ans;
    // }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        // int first = -1;
        // int last = -1;
        // for(int i = 0 ; i < n ; i++){
        //     if(nums[i] == target){
        //         if(first == -1) first = i;
        //         last = i ;
        //     }
        // }
        // return {first , last};


        // int lb = lowerBound(nums , n , target);
        // if(lb == n || nums[lb] != target) return {-1 , -1};
        // return{lb , upperBound(nums , n , target) - 1};

        int first = firstOccurrence(nums ,  n , target);
        if(first == -1)return {-1 , -1};
        int last = lastOccurrence( nums , n , target);
        return{first , last};
    }
};