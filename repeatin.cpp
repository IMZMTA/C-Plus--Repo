// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=10;
//     int arr[n]={12,4,8,4,12,9,6,4,8,14};
// //     for(int i=0;i<n;i++)
// //     {
// //         for(int j=i+1;j<n;j++)
// //         {
// //             if(arr[i]=arr[j])
// //             {
// //                 cout<<"First repeating element is "<<arr[i]<<endl;
// //                 break;
// //             }
// //             break;
// //         }
// //         break;
// //      }
// // }
//     // for(int i=n-1;i>=0;i--){
//     //     cout<<arr[i]<<" ";
//     // }
//     // int i=0; int j=n-1;
//     // while(i<j){
//     //     arr[j]=arr[i]*arr[j];
//     //     arr[i]=arr[j]/arr[i];
//     //     arr[j]=arr[j]/arr[i];
//     //     i++;
//     //     j--;
//     // }
//     // for(int i=0;i<n;i++){
//     //     cout<<arr[i]<<" ";
//     // }
//     if(n==1)
//         cout<<"Index of peak element is : "<<0<<endl;
//     if(arr[0]>=arr[1])
//         cout<<"Index of peak element is : "<<0<<endl;
//     for(int i=1;i<n-1;i++){
//         if(arr[i]>=arr[i-1] && arr[i] && arr[i+1]){
//             cout<<"Index of peak element is : "<<i<<endl;
//         }
//     }
//     if(arr[n-1]>=arr[n-2])
//         cout<<"Index of peak element is : "<<n-1<<endl;
//     return 0;
// }
// A C++ program to find a peak element
// #include <bits/stdc++.h>
// using namespace std;

// // Find the peak element in the array
// int findPeak(int arr[], int n)
// {
// 	// first or last element is peak element
// 	if (n == 1)
// 		return 0;
// 	if (arr[0] >= arr[1])
// 		return 0;
// 	if (arr[n - 1] >= arr[n - 2])
// 		return n - 1;

// 	// check for every other element
// 	for (int i = 1; i < n - 1; i++) {

// 		// check if the neighbors are smaller
// 		if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
// 			return i;
// 	}
// }

// // Driver Code
// int main()
// {
// 	int arr[] = { 56, 3, 20, 4, 1, 45 };
// 	int n = sizeof(arr) / sizeof(arr[0]);
// 	cout << "Index of a peak point is " << findPeak(arr, n);
// 	return 0;
// }

// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to assign rank to
// array elements
void changeArr(int input[], int N)
{
	
	// Copy input array into newArray
	int newArray[N];
	copy(input, input + N, newArray);

	// Sort newArray[] in ascending order
	sort(newArray, newArray + N);
	int i;
	
	// Map to store the rank of
	// the array element
	map<int, int> ranks;

	int rank = 1;

	for(int index = 0; index < N; index++)
	{

		int element = newArray[index];

		// Update rank of element
		if (ranks[element] == 0)
		{
			ranks[element] = rank;
			rank++;
		}
	}

	// Assign ranks to elements
	for(int index = 0; index < N; index++)
	{
		int element = input[index];
		input[index] = ranks[input[index]];
	}
}

// Driver code
int main()
{
	
	// Given array arr[]
	int arr[] = { 100, 2, 70, 2 };

	int N = sizeof(arr) / sizeof(arr[0]);
	
	// Function call
	changeArr(arr, N);

	// Print the array elements
	cout << "[";
	for(int i = 0; i < N - 1; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << arr[N - 1] << "]";
	return 0;
}

// This code is contributed by divyeshrabadiya07
