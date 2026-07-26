#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //better
    //    map<int , int> mpp;
       int n = nums.size();
    //    for(int i = 0 ; i < nums.size() ; i++){
    //         mpp[nums[i]]++;
    //         if(mpp[nums[i]]>n/2){
    //             return nums[i];
    //         }
            
    //    }
    //    return -1;

    //optimal 
    int cnt=0;
    int el ;
    for(int i= 0 ; i < n ; i++){
         if(cnt == 0){
            cnt =1;
            el = nums[i]; 
         }
         else if(nums[i]==el) cnt++;
         else cnt--; 
    }
    int cnt1=0;
    for(int i= 0 ; i < n ; i++){
        if(nums[i]==el) cnt1++;

    }
    if(cnt1>n/2) return el; 
     return -1;
    }
};