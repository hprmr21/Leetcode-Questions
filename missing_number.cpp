#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
    //     vector<int>hash(n+1,0);  //method-1
    //     for(int i=0;i<n;i++){
    //         hash[nums[i]]++;
    //     }
    //     for (int i = 1; i <= n; i++) {
    //         if (hash[i] == 0) {
    //          return i;
    //         }
    // }
    // return -1;


    int sum = (n*(n+1))/2;      //method-2
    int s2=0;
    for(int i=0;i<n;i++){
        s2+=nums[i];
    }
    return (sum-s2);

    }

    // int Xor1=0;          //method-3
    // int Xor2=0;
   
    // for(int i=0;i<n;i++){
    //     Xor2 ^=nums[i];
    //     Xor1^=(i+1);
    // }
    
    // return Xor1^Xor2;
    // }
};