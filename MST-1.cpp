// #include <iostream>
// using namespace std;

// int partition(int arr[], int s, int e)
// {
//     int p = arr[s];
//     int c = 0;
//     for (int i = s + 1; i <= e; i++)
//     {
//         if (arr[i] <= p)
//         {
//             c++;
//         }
//     }
//     int pi = s + c;
//     swap(arr[pi], arr[s]);

//     int i = s, j = e;
//     while (i < pi && j > pi)
//     {
//         while (arr[i] < p)
//         {
//             i++;
//         }
//         while (arr[j] > p)
//         {
//             j--;
//         }
//         if (i < pi && j > pi)
//         {
//             swap(arr[i++], arr[j--]);
//         }
//     }
//     return pi;
// }

// void quicksort(int arr[], int s, int e)
// {
//     if (s >= e)
//     {
//         return;
//     }
//     int p = partition(arr, s, e);
//     quicksort(arr, s, p - 1);
//     quicksort(arr, p + 1, e);
// }

// int main()
// {
//     // int n;
//     // cin>>n;
//     // int arr[n];
//     // for(int i=0; i<n;i++){
//     //     arr[i]=rand()%1000;
//     //     cout<<arr[i]<<" ";
//     // }
//     int arr[] = {4, 89, 76, 3, 55, 45, 9, 4, 9, 4, 9, 4, 9, 9, 9, 9, 9};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     // cout<<n;
//     cout << endl
//          << endl
//          << "Sorted Array : " << endl;

//     quicksort(arr, 0, n - 1);

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

//Time Complexity- O(n^2)
//Time Complexity- omega(nlogn)

// #include <iostream>
// using namespace std;

// int partition(int arr[], int s, int e)
// {
//     int p = arr[e];
//     int i = s - 1;
//     for (int j = s; j < e; j++)
//     {
//         if (arr[j] < p)         //5,8,4,9,3,6,7      
//         {
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }
//     i++;
//     int temp = arr[i];
//     arr[i] = p;
//     arr[e] = temp;
//     return i;
// }

// void quicksort(int arr[], int s, int e)
// {
//     if (s < e)
//     {
//         int pi = partition(arr, s, e);
//         quicksort(arr, s, pi - 1);
//         quicksort(arr, pi + 1, e);
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = rand() % 1000;
//         cout << arr[i] << " ";
//     }

//     quicksort(arr, 0, n - 1);
//     cout << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;

// void merge(int arr[], int s, int m, int e){
//     int n1=m-s+1;
//     int n2=e-m;
//     int a1[n1], a2[n2];
//     for(int i=0; i<n1;i++){
//         a1[i]=arr[s+i];
//     }
//     for(int i=0; i<n2;i++){
//         a2[i]=arr[m+1+i];
//     }

//     int i=0, j=0, k=s;
//     while(i<n1 && j<n2){
//         if(a1[i]<=a2[j]){
//             arr[k++]=a1[i++];
//         }
//         else{
//             arr[k++]=a2[j++];
//         }
//     }

//     while(i<n1){
//         arr[k++]=a1[i++];
//     }
//     while(j<n2){
//         arr[k++]=a2[j++];
//     }

// }

// void mergesort(int arr[], int s, int e){
//     if(s>=e){
//         return;
//     }
//     int mid=s+(e-s)/2;
//     mergesort(arr,s,mid);
//     mergesort(arr,mid+1,e);
//     merge(arr,s,mid,e);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = rand() % 1000;
//         cout << arr[i] << " ";
//     }

//     cout<<"\nSorted Array : "<<endl;
//     mergesort(arr,0,n-1);

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=rand()%100;
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=1; i<n;i++){
        int current=arr[i];
        int j=i-1;
        while(j>=0&&arr[current]<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
        cout<<"sorted array : "<<endl;
    for(int i=0;i<n;i++){
        arr[i]=rand()%100;
        cout<<arr[i]<<" ";
    }
    return 0;
}