#include<iostream>
using namespace std;

int fact(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}
int main(){
    int n,r;
    cin>>n>>r;

    int ans=fact(n)/(fact(r)*fact(n-r));
    cout<<"nCr="<<ans<<endl;
    return 0;
}