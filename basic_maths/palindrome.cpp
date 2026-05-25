#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int original=n;
    int rev=0;
    while (n>0)
    {
        int num=n%10;
        rev=rev*10 +num;
        n=n/10;
    }
    if(original==rev)cout<<"It is a palindrome number";
    else cout<<"Its not a plaindrome number";
}