#include<iostream>
#include<sys/time.h>
using namespace std;

int main()
{
    // int Null=0;
    int n;
    cin>> n;
    struct timeval tv;
    double start,end,elapse;
    gettimeofday(&tv,NULL);
    start=tv.tv_sec+(tv.tv_usec/100000);
    for(int i=1;i<=n;i++){
        cout<<i<<endl;
    }
    gettimeofday(&tv,NULL);
    end=tv.tv_sec+(tv.tv_usec/100000);
    elapse=end-start;
    cout<<endl<<"Elapse : "<<elapse<<endl;
    // int arr[10];
    // cout<<"Random number and in array form \n";
    // for(int i=0;i<10;i++){
    //     int j=rand()%10;
    //     cout<<j<<" "<<arr[&j]<<endl;
    //     // cout<<arr[j]<<" ";
    
}