#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"\nEnter the no of elements in array : ";
    cin>>n;
    int arr[n];

    cout<<"Unsorted array : ";
    for(int i=0;i<n;i++){
        arr[i]=rand()%100;
        cout<<arr[i]<<" ";
    }
    for(int k=0;k<n-1;k++){
        for(int i=0;i<n-k-1;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            } 
        }
    }
    cout<<"\nSorted array : ";
    for(int l=0;l<n;l++){
        cout<<arr[l]<<" ";
    }
    cout<<endl<<endl;
    return 0;
}