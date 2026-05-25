#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int original=n;
   
    int sum=0;
    while(n>0){
        int num=n%10;
        sum=sum+(num*num*num);
        n=n/10;

    }
    if(sum==original)cout<<"Armstrong";
    else cout<<"Not an Armstrong";
    

}