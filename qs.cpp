#include<iostream>
#include<sys/time.h>
using namespace std;

// int partition(int arr[],int start,int end)
// {
//     int i,j,p;
//     i=start;
//     j=end+1;
//     p=start;
//     do
//     {
//         do
//         {
//             i=i+1;
//         }while(arr[i]<arr[p]);
//         do
//         {
//             j=j-1;
//         }while(arr[j]>arr[p]);
//         swap(arr[i],arr[j]);
//     }while(i<=j);
//         swap(arr[i],arr[j]);
//         swap(arr[start],arr[j]);
//         return j;

// }

// void quicksort(int arr[], int start, int end)
// {
//     int p;
//     if(start<end+1)
//     {
//         p=partition(arr,start,end);
//         quicksort(arr,start,p-1);
//         quicksort(arr,p+1,end);
//     }
//     for(int i=0;i<=end;i++)
//     {
//         cout<<arr[i];
//     }
// }

int partition(int arr[],int start, int end)
{
    int p=arr[start];
    int i=start;
    int j=end;
    while(i<j)
    {
        while(arr[i]<=p)
        {
            i++;
        }
        while(arr[j]>=p)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[start],arr[j]);
    return j;
}
void quicksort(int arr[],int start,int end)
{
    if(start<end)
    {
        // return;
        int loc=partition(arr,start,end);
        quicksort(arr,start,loc-1);
        quicksort(arr,loc+1,end);
    }
}
int main()
{
    // int n=rand()%100;
	// cout<<"Enter the number of elements in array : "<<n<<endl;

    int n;
	cout<<"Enter the number of elements in array : ";
	cin>>n;
	int arr[n];

	// for(int i=0;i< n;i++){
	// 	arr[i]=rand()%1000;
	// }
	
    for(int i=0;i< n;i++){
		cin>>arr[i];
	}
	cout<<"Array before sorting : \n";
	for(int i=0;i< n;i++){
		cout<<arr[i]<<" ";
	}

    quicksort(arr,0,n-1);
    cout<<"\nArray after quicksort : "<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}