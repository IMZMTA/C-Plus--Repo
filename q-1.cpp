// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter the length of an array: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 cout<<"The first repeating element is: "<<arr[i]<<endl;
//                 break;
//             }
//         }
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int firstRepeatingElement(int arr[], int n)
{
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            
            if (arr[i] == arr[j]) {
                return i;
            }
        }
    }
    return -1;
}

int main()
{
    
    int arr[] = { 10, 5, 3, 4, 3, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = firstRepeatingElement(arr, n);
 
    
    if (index == -1) {
        cout << "No repeating element found!" << endl;
    }
    else {
        
        cout << "First repeating element is " << arr[index]
             << endl;
    }
 
    return 0;
}

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter the length of an array: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int max=arr[0];
//     int min=arr[0];
//     for(int i=0;i<n;i++){
        
//         if(arr[i]>max){
//             max=arr[i];
//         }
//         if(arr[i]<min){
//             min=arr[i];
//         }

//     }
//     cout<<"Kth largest element in an array is :"<<max<<endl;
//     cout<<"Kth smallest element in an array is :"<<min;
//     return 0;
// }