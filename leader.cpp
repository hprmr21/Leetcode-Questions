#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector <int>leader;
        int maxi=INT_MIN;
        for(int i = n-1 ; i>=0 ; i--){
            if(arr[i]>=maxi){
                leader.push_back(arr[i]);
                
            }
            maxi=max(maxi,arr[i]);
            
        }
        reverse(leader.begin(),leader.end());
        return leader;
    }
};