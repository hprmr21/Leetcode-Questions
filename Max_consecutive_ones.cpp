#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0;
        int cnt=0;
        for(int i=0;i<nums.size();i++){    //arr[]={1,0,0,1,1,1,1,0,2,3}
            if(nums[i]==1){
                cnt++;
                maxi=max(maxi,cnt);
            }
            else cnt=0;
        }
        return maxi;
    }
};