#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        // unordered_map<int,int> mpp;
        // for(int i = 0; i < n; i++) {
        //     mpp[nums[i]]++;
        // }
        // vector<int> ans;
        // for(auto it : mpp) {
        //     if(it.second > n/3) {
        //         ans.push_back(it.first);
        //     }
        // }
        // return ans; 
    

        int count1 = 0 ; 
        int count2 = 0;
        int el1 = INT_MIN;
        int el2 = INT_MIN ;
        for(int i = 0 ; i < n ; i++){
            if(count1 == 0 && nums[i] != el2){
                count1 = 1 ;
                el1 = nums[i]; 
            }
            else if (count2 == 0 && nums[i] != el1){
                count2 = 1;
                el2 = nums[i];
            }
            else if (el1 == nums[i])count1++;
            else if(el2 == nums[i])count2++;
            else {
                count1--;
                count2--;
            }
        }
        vector<int> ans;
        count1 = 0 ;
        count2 = 0;
        for( int i = 0 ; i < n ; i++){
            if(el1 == nums[i]) count1++;
            if(el2 == nums[i])count2++;

        }
        int mini = (int)(n/3) + 1;
        if(count1 >= mini)ans.push_back(el1);
        if(count2 >= mini && el2 != el1)ans.push_back(el2);
        return ans;



    }
};