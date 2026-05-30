#include<iostream>
#include<map>
#include<vector>
using namespace std;
class Solution {
	public:
	int longestSubarray(vector<int>& arr, int k) {      //optimal for the array if it contains 0s or negative
		// code here
		// map<long long, int>preSumMap;
		// long long sum = 0;
		// int maxLen = 0;
		
		// for (int i = 0; i<arr.size(); i++) {
		// 	sum += arr[i];
		// 	if (sum == k) {
		// 		maxLen = max(maxLen, i + 1);
				
		// 	}
		// 	long long rev = sum - k;
		// 	if (preSumMap.find(rev) != preSumMap.end()) {
		// 		int len = i - preSumMap[rev];
		// 		maxLen = max(maxLen, len);
		// 	}
		// 	if (preSumMap.find(sum) == preSumMap.end()) {
		// 		preSumMap[sum] = i;
		// 	}
			
		// }
		// return maxLen;




        int left=0, right=0;                //otpimal solution for postive and 0s in an array 
        long long sum=arr[0];
        int maxLen=0; 
        int n=arr.size();
        while (right < n){
            while(left <= right && sum > k){
                sum-=arr[left];
                left++;
            }
            if(sum == k ){
                maxLen=max(maxLen,right - left + 1);
            }
            right++;
            if(right < n){
            sum+=arr[right];
            }
        }
        return maxLen;
	}
};
