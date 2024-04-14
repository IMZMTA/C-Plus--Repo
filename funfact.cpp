#include<iostream>
using namespace std;

int fact(int n){
    int factorial=1;
    for(int i=1;i<=n;i++)
        factorial=factorial*i;
    return factorial;
}
int main(){
    int n;
    cin>>n;

    cout<<"factorial of a number="<<fact(n)<<endl;
    return 0;
    
}

// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     cout<<a<<" "<<b<<endl;
//     swap(a,b);
//     cout<<a<<" "<<b<<endl;
// }