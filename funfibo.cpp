#include<iostream>
using namespace std;

void fib(int n){
    int f1=0;
    int f2=1;
    int nxt=0;

    for(int i=1;i<=n;i++){
        cout<<f1<<" ";
        nxt=f1+f2;
        f1=f2;
        f2=nxt;
    }
    return;
}

int main(){

    int n;
    cin>>n;

    fib(n);
    return 0;
}