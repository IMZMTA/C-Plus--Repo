#include<iostream>
using namespace std;
int main(){
    unsigned int n;
    cin>>n;
    int c=0;
    while(n!=0){
        if(n&1){
            c++;
        }
        n=n>>1;
    }
    cout<<"No of 1 Bits : "<<c<<endl;
    int a,s=0;
    cin>>a;
    while(a>0){
        int r=a%10;
        s=s*10+r;
        a/=10;
    }
    cout<<"Reverse integer : "<<s;
}