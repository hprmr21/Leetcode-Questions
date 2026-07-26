#include<vector>
#include<set>
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



        // int n=nums.size();
        // set<int> st;
        // for(int i=0;i<n;i++){      //TC-----> NlogN
        //     st.insert(nums[i]);

        // }
        // int index=0;
        // for(auto it:st){       // TC------> N
        //     nums[index]=it;
        //     index++;
        // }
        // return index;
    }
};