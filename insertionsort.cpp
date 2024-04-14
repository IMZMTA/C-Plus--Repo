// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         arr[i]=rand()%100;
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     for(int i=1;i<n;i++){
//         int current=arr[i];
//         int j=i-1;
//         while(j>=0 && current < arr[j]){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=current;
//     }
//     cout<<"sorted array : "<<endl;
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

    for(int i=1;i<n;i++){
        int current=arr[i];
        int j;
        for(j=i-1;j>=0 && current < arr[j];j--){
            arr[j+1]=arr[j];
        }
        arr[j+1]=current;
    }
    cout<<"sorted array : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}