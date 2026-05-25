#include <iostream>
#include<vector>
using namespace std;
void secondLargest(int arr[],int n){
    //method-1

    int larg=arr[0];
    int secondlg=-1;
    // for(int i=0;i<n;i++){
    //     if(arr[i]>larg){
    //         larg=arr[i];
    //     }
    // }
    
    // cout<<larg;
    // cout<<endl;[]
    // for(int i=0;i<n;i++){
    //      if(arr[i]>secondlg && arr[i]!=larg){
    //         secondlg=arr[i];
    //      }
    // }
    // cout<<secondlg;

    //method-2 (optimal) 
    for(int i=0;i<n;i++){
        if(arr[i]>larg){
            secondlg=larg;
            larg=arr[i];

        }
        else if(arr[i]<larg && arr[i]>secondlg){
            secondlg=arr[i];
        }

    }
    cout<<"Sceond largest is: ";
    cout<<secondlg<<endl;
    cout<<"Largest is: "<<larg<<endl;


}



int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    

secondLargest(arr,n);

    
    return 0;
}