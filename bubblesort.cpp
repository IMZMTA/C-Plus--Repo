#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Unsorted array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int k=0;k<n-1;k++){
        for(int i=0;i<n-k-1;i++){
            if(arr[i]<arr[i+1]){
                // int temp=arr[i];
                // arr[i]=arr[i+1];
                // arr[i+1]=temp;
                swap(arr[i],arr[i+1]);
            } 
        }
    }
    cout<<"\nSorted array : ";
    for(int l=0;l<n;l++){
        cout<<arr[l]<<" ";
    }
    return 0;
}