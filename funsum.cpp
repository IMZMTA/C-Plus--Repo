#include<iostream>
using namespace std;

int sums(int a, int b)
{
    int sum=a+b;
    return sum;
}
int main(){
    int a;
    int b;
    cin>>a>>b;
    cout<<"Sum="<<sums(a,b)<<endl;
    return 0;
}