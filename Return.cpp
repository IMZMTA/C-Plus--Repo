#include<iostream>
using namespace std;
int main(){
    int a[3], b[3],c=0,d=0;
    cout<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter the element of 1st array at index "<<i<<" : ";
        cin>>a[i];
        cout<<"Enter the element of 2nd array at index "<<i<<" : ";
        cin>>b[i];
        if(a[i]>b[i]){
            c++;
        }
        else if(b[i]>a[i]){
            d++;
        }
    }
    int arr[2]={c,d};
    for(int i=0;i<2;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int a[n], b[n],c=0,d=0;
//     cout<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         a[i]=rand()%1000;
//         cout<<"Enter the element of 1st array at index "<<i<<" : "<<a[i]<<endl;
//         b[i]=rand()%1000;
//         cout<<"Enter the element of 2nd array at index "<<i<<" : "<<b[i]<<endl;
//         if(a[i]>b[i]){
//             c++;
//         }
//         else if(b[i]>a[i]){
//             d++;
//         }
//     }
//     int arr[2]={c,d};
//     for(int i=0;i<2;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }