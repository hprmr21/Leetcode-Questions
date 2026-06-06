#include<iostream>
#include<vector>
#include<set>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        // sort(nums.begin() , nums.end());
        // int lastSmaller = INT_MIN;
        int longest = 1;
        // int count = 0 ;
        if (n == 0)
            return 0;
        // for(int i = 0 ; i < n ; i++){
        //     if(nums[i]-1 == lastSmaller){
        //         count++;
        //         lastSmaller=nums[i];
        //     }
        //     else if(nums[i] != lastSmaller){
        //         count = 1;
        //         lastSmaller = nums[i];

        //     }
        //     longest = max(longest , count);
        // }
        // return longest ;

        // optimal
        unordered_set<int> st;
        for (int i = 0; i < n; i++) {
            st.insert(nums[i]);
        }
        for (auto it : st) {
            if (st.find(it - 1) == st.end()) {
                int count = 1;
                int x = it;
                while (st.find(x + 1) != st.end()) {
                    x++;
                    count++;
                }
                longest = max(longest, count);
            }
        }
        return longest;
    }
};