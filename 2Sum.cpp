#include<iostream>
#include<vector>
#include<map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int > mpp;
        int sum = 0 ;
        for(int i= 0 ; i < nums.size(); i++){
                 sum = nums[i];
                int more = target - sum ;
                if(mpp.find(more) != mpp.end()){
                        return {mpp[more], i};
                }
                mpp[sum]=i;
        }
        return {};
    }
};