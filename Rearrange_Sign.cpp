#include<iostream>
#include<vector>
using namespace std;
//for pos=neg;
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
    //    vector<int> pos;
    //    vector<int> neg;
       int n = nums.size();
    //    for(int i = 0 ; i < n ; i++){
    //     if(nums[i]>0)  pos.push_back(nums[i]);
    //     else           neg.push_back(nums[i]); 
    //    } 
    //    for(int i = 0 ; i < n/2 ; i++){
    //     nums[2*i]=pos[i];
    //     nums[2*i+1]=neg[i];
    //    }

    //Better 
    vector<int> ans(n);
    int posIndx=0;
    int negIndx=1;
    for(int i = 0 ; i < n ; i++){
        if(nums[i]>0){
            ans[posIndx]=nums[i];
            posIndx += 2;
        }
        else {
            ans[negIndx]=nums[i];
            negIndx += 2;

        }

    }
    return ans;
    
    }
};
// for pos!=neg
class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        vector<int> pos , neg ;
        int n = arr.size();
        for(int i = 0 ; i < n ; i++){
            if(arr[i] >= 0 ) pos.push_back(arr[i]);
            else             neg.push_back(arr[i]);
        }
        if(pos.size() >= neg.size()){
            for(int i = 0 ; i < neg.size() ; i++){
                arr[i*2]=pos[i];
                arr[i*2+1]=neg[i];
            }
            int indx = neg.size()*2;
            for(int i = neg.size() ; i < pos.size() ; i++){
                arr[indx] = pos[i];
                indx++;
            }
            
        }
        else{
            for(int i = 0 ; i < pos.size() ; i++){
                arr[i*2]=pos[i];
                arr[i*2+1]=neg[i];
            }
            int indx = pos.size()*2;
            for(int i = pos.size() ; i < neg.size() ; i++){
                arr[indx] = neg[i];
                indx++;
            }
            
        }
    }
};