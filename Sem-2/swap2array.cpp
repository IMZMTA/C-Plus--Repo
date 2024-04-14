#include<iostream>
using namespace std;
void printd(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void swaptwo(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main()
{
//     int arr[8]={1,2,3,4,5,6,7,8};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i+=2){
//         swap(arr[i],arr[i+1]);
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
    int even [8]={1,2,3,4,5,6,7,8};
    int oddb [5]={1,4,7,3,5};
    swaptwo(even,8);
    printd(even,8);
    cout<<endl;
    swaptwo(oddb,5);
    printd(oddb,5);

    return 0;
}