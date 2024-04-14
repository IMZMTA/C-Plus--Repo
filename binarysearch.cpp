#include<iostream>
using namespace std;

int binarysearch(int arr[],int start, int end, int value){
    
    if(start<=end)
    {
        int mid=start + (end-start)/2;
        if(arr[mid]==value)
        {
            return mid;
        }
        if(arr[mid]>value)
        {
            return binarysearch(arr,start,mid-1,value);
        }
        return binarysearch(arr,mid+1,end,value);
    }
    return -1;
}

void printarray(int arr[], int size){
    for(int i=0;i<size;i++)
    {
        arr[i]=rand()%100;
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void inputkey(int res){
        if(res==-1){
        cout<<"Key is not present";
    }
    else{
        cout<<"Key is present at "<<res;
    }
}

int main()
{
    int n,a;
    cin>>n>>a;
    int arr[n];
    printarray(arr,n);
    int result=binarysearch(arr,0,n-1,a);
    // if(result==-1){
    //     cout<<"Key is not present";
    // }
    // else{
    //     cout<<"Key is present at "<<result;
    // }
    inputkey(result);
    return 0;
}
