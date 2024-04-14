#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    cout<<"Unsorted array : ";
    for(int i=0;i<n;i++){
        arr[i]=rand()%100;
        cout<<arr[i]<<" ";
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                // int temp=arr[j];
                // arr[j]=arr[i];
                // arr[i]=temp;
                swap(arr[j],arr[i]);
            } 
        }
    }
    cout<<"\nSorted array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}