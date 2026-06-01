#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long sum=0;
        int start , ansStart=-1 , ansEnd=1;
        long long  maxi=LONG_MIN;
        for(int i = 0 ; i < nums.size() ; i++){
            if(sum==0) start = i ;
             sum+=nums[i];

            if(sum>maxi){
                maxi=max(maxi,sum);
                ansStart=start;
                ansEnd=i;
            }


             if(sum<0) sum=0;
             for(int i = ansStart ; i < ansEnd ; i++){
                cout<<nums[i]<<" ";
             }
             
        }
        return maxi;

    }
};
