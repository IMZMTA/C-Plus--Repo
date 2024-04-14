#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s=0,p=1;
    while(n>0){
        s+=n%10;
        p*=n%10;
        n=n/10;
    }
    cout<<s<<" "<<p<<endl;
    cout<<"Difference of product and sum ="<<(p-s);
}