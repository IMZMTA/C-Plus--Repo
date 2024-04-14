#include<iostream>
using namespace std;

// void pointer(int *b){
//     cout<<"Address of b: "<<&b<<endl;
//     cout<<"Value of b: "<<*b<<endl;
// }

// int main(){
//     int a=10;
//     int *p=&a;
//     cout<<"Value at p = "<<*p<<endl;
//     *p=100;
//     cout<<"Address at p = "<<&p<<endl;
//     cout<<"Value at a = "<<a<<endl;
//     cout<<"Address of a ="<<&a<<endl;

//     pointer(p);
// }

// int sum(int *n1, int *n2){
//     cout<<"5-"<<*n1<<" "<<*n2<<endl;
//     cout<<"6-"<<&n1<<" "<<&n2<<endl;
//     return *n1+*n2;
// }

// int main(){
//     int a , b;
//     cin>>a>>b;

//     cout<<a<<" "<<b<<endl;
//     cout<<&a<<" "<<&b<<endl;

//     int *p1=&a;
//     int *p2=&b;

//     cout<<"1-"<<a<<" "<<b<<endl;
//     cout<<"2-"<<p1<<" "<<p2<<endl;
//     cout<<"3-"<<*p1<<" "<<*p2<<endl;
//     cout<<"4-"<<&p1<<" "<<&p2<<endl;

//     int s=sum(p1,p2);
//     cout<<s;
// }