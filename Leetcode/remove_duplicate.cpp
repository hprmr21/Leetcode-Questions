#include<vector>
using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        int n=nums.size();
        for(int j=1;j<n;j++){
            if(nums[j]!=nums[k]){
                nums[k+1]=nums[j];
                k++;
            }
        }
        return k+1;
    }
};