#include <iostream>
#include<vector>
using namespace std;

void reverseArrayRight(int arr[],int start ,int end){
    if (start>end) return;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    cin>>k;
//brute force solution
// vector<int>temp;
// k=k%n;
// for(int i=0;i<k;i++){
//     temp[i]=arr[n-k+i];
// }
// for(int i=n-k-1;i>=0;i--){
//     arr[i+k]=arr[i];
// }
// for(int i=0;i<n;i++){
//     arr[i]=temp[i];
}





reverseArrayRight(arr, 0,n-k-1);    //optimal 
reverseArrayRight(arr,n-k,n-1);
reverseArrayRight(arr,0,n-1);



for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
}
    
    return 0;
}