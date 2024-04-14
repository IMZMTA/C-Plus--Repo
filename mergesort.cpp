#include<iostream>
#include <sys/time.h>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{


    int n1 = mid - start + 1;
    int n2 = end-mid;

    int s[n1], t[n2];

    for (int i = 0; i < n1; i++)
        s[i] = arr[start + i];
    for (int j = 0; j < n2; j++)
        t[j] = arr[mid + 1 + j];


    int i, j, k;
    i = 0;
    j = 0;
    k = start;
    


    while (i < n1 && j < n2) {
        if (s[i] <= t[j]) {
            arr[k++] = s[i++];
        } else {
            arr[k++] = t[j++];
        }
    }


    while (i < n1) {
        arr[k++] = s[i++];
    }

    while (j < n2) {
        arr[k++] = t[j++];
    }
}

void mergeSort(int arr[], int start, int end){
    while(start>=end){
        return;
    }
    int mid=start+(end-start)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start, mid, end);
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    struct timeval tv;
    double start,end,elapse;
	gettimeofday(&tv,NULL);
    start=tv.tv_sec+(tv.tv_usec/100000.0);

    for(int i=0;i<n;i++){
        arr[i]=rand()%100;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n Merge Sorted array : "<<endl;
    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    gettimeofday(&tv,NULL);
    end=tv.tv_sec+(tv.tv_usec/100000);
    elapse=end-start;
    cout<<endl<<endl<<"Elapse : "<<elapse<<endl;
}


