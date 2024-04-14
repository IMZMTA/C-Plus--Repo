#include<iostream>
using namespace std;
int main()
{
    int f1=0;
    int f2=1;
    int s=0;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<f1<<" ";
        s=f1+f2;
        f1=f2;
        f2=s;
    }
}