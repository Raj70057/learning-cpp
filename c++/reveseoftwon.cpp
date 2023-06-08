#include<iostream>
using namespace std;
int main(){
    int n,rem,r;
    cout<<"enter the number";
    cin>>n;
    rem=n%10;
    n=n/10;
    r=10*rem+n;
    cout<<"reverse is"<<r;

}