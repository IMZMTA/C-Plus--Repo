#include<iostream>
using namespace std;

int main(){
    int n,m,mask=0;
    cin>>n;
    m=n;
    if(n==0){
        m=1;
    }
    while(m!=0){
        mask=(mask<<1)|1;
        m=m>>1;
    }
    int ans=(~n)&mask;
    cout<<"Bits Compliments of "<<n<<" is : "<<ans;
}