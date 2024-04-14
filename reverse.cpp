#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int d=0,rn=0;
    for(;n!=0;n/=10){
        d=n%10;
        rn=rn*10+d;
    }
    cout<<"Reverse Number : "<<rn;
}