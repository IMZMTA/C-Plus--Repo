// // #include<stdio.h>
// // #include<sys/time.h>
// // void swap(int *x,int *y)
// // {
// // int temp;
// // temp=*x;
// // *x=*y;
// // *y=temp;
// // }
// // void generate_random(int a[],int n)
// // { int i;
// // srand(time(0));
// // for(i=0;i<n;i++)
// // a[i]=rand()%1000;
// // }
// // int Partition(int a[10],int l,int h)
// // {
// // int i,j,p;
// // i=l;j=h+1; p=l;
// // do{
// // do{
// //  i=i+1;
// // }while(a[i]<a[p]);
// // do{
// // j=j-1;
// // }while(a[j]>a[p]);
// // swap(&a[i],&a[j]);
// // }while(i<=j);
// // swap(&a[i],&a[j]);
// // swap(&a[l],&a[j]);
// // return j;
// // }
// // int Quicksort(int a[10],int m,int n)
// // {
// // int s;
// // if(m<n+1)
// // {
// // s=Partition(a,m,n);
// // Quicksort(a,m,s-1);
// // Quicksort(a,s+1,n);
// // return a;
// // }
// // }
// // int main()
// // {
// // int a[100000],i,ch,n;
// // struct timeval t;
// // double start,end;
// // FILE *fp;
// // printf("Enter the type of operation\n");
// // printf("1-Randomly generate numbers and quicksort\n");
// // printf("2-Enter the number of values to generate and sort\n");
// // scanf("%d",&ch);
// // switch(ch)
// // {case 1:
// //  fp=fopen("quicksort.txt","w");
// //  for(i=10000;i<100000;i=i+5000)
// //  {
// // generate_random(a,i);
// // gettimeofday(&t,NULL);
// // start=t.tv_sec+(t.tv_usec/1000000.0);
// // Quicksort(a,0,i-1);
// // gettimeofday(&t,NULL);
// // end=t.tv_sec+(t.tv_usec/1000000.0);
// // printf("%d\t%lf\n",i,end-start);
// // fprintf(fp,"%d\t%lf\n",i,end-start);
// // }
// // fclose(fp); break;
// // case 2:printf("Enter the number of values to be generated\n");
// //  scanf("%d",&i);
// //  generate_random(a,i);
// //  gettimeofday(&t,NULL);
// // start=t.tv_sec+(t.tv_usec/1000000.0);
// // Quicksort(a,0,i-1);
// // gettimeofday(&t,NULL);
// // end=t.tv_sec+(t.tv_usec/1000000.0);
// // printf("%d\t%lf\n",i,end-start);
// // printf("Sorted numbers are\n");
// // printf("The sorted array is\n");
// // for(n=0;n<i;n++)
// // printf("%d\t",a[n]);
// // break;
// //  default: printf("Invalid choice\n");
// // }
// // return 0; }

// #include<iostream>
// using namespace std;

// void merge(int arr[], int s, int mid, int e){

//     int n1=mid-s+1;
//     int n2=e-mid;

//     int a1[n1], a2[n2];

//     for(int i=0;i<n1;i++){
//         a1[i]=arr[s+i];
//     }
//     for(int i=0;i<n2;i++){
//         a2[i]=arr[mid+1+i];
//     }

//     int i, j, k;
//     i = 0;
//     j = 0;
//     k = s;

//     while(i < n1 && j < n2){
//         if(a1[i]<=a2[j]){
//             arr[k++]=a1[i++];
//         }
//         else{
//             arr[k++]=a2[j++];
//         }
//         k++;
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


// int main(){

//     int n;
//     cin>>n;
//     int arr[n];

//     cout<<"Unsorted Array: "<<endl;
//     for(int i=0;i<n;i++){
//         arr[i]=rand()%1000;
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     cout<<endl;
//     cout<<"Sorted Array: "<<endl;
//     mergesort(arr,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;


//     int MissingNumber(int array[], int n)
//     {
//         // Given the range of elements
//         // are 1 more than the size of array
//         cout<<n<<endl;
//         int total = (n) * (n + 1) / 2;
//         cout<<"total= "<<total<<endl;
//         for (int i = 0; i < n-1; i++){
//             total -= array[i];
//             cout<<total<<" "<<array[i]<<" i= "<<i<<endl;
//         }
//         cout<<"t= "<<total<<endl;;
//         return total;
//     }

// int main(){
//         int n;
//         cin>>n;

//         int array[n-1];
//         for(int i=0; i<n-1; ++i){
//             cin >> array[i];
//         }
//         cout<<MissingNumber(array,n)<< "\n";
//     return 0;
// }

// #include <stdio.h>
// #include <iostream>
// using namespace std;
// void maximumSubarraySum(int array[], int n) {
//   int max_sum = -1e9;
//   int begin = 0;
//   int end = 0;
//   for (int i = 0; i < n; i++) {
//     int current_sum = 0;
//     for (int j = i; j < n; j++) {
//       current_sum += array[j];
//       if (max_sum < current_sum) {
//         max_sum = current_sum;
//         begin = i;
//         end = j;
//       }
//     }
//   }
//   cout << "largest sum is " << max_sum << endl;
//   cout << "largest sum contiguous subarray: ";
//   for (int i = begin; i <= end; i++) {
//     cout << array[i] << " ";
//   }
// }
// int main() {
//   int array[] = {-1,-2,-3,-4};
//   maximumSubarraySum(array, sizeof(array) / sizeof(array[0]));
// }

// #include<bits/stdc++.h>
// using namespace std;

// int fmInvertingFactor(int arr[], int n){
//     for(int i=0;i<n;i++){
//         int num=0;
//         while(arr[i]!=0){
//             num=num*10+(arr[i]%10);
//             arr[i]/=10;
//         }
//         arr[i]=num;
//     }
//     sort(arr, arr+n);

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

//     int min=INT_MAX;
//     for(int i=0;i<n;i++){
//         if(arr[i+1]-arr[i]<min){
//             min=arr[i+1]-arr[i];
//         }
//     }
//     return min;

// }

// int main(){
//     int n;
//     cin>>n;

//     int arr[n];

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     cout<<"\n"<<fmInvertingFactor(arr,n)<<endl;
// }

/* A simple program to print subarray
with sum as given sum */
// #include <bits/stdc++.h>
// using namespace std;

/* Returns true if the there is a subarray
of arr[] with sum equal to 'sum' otherwise
returns false. Also, prints the result */
// void subArraySum(int arr[], int n, int sum)
// {

// 	// Pick a starting point
// 	for (int i = 0; i < n; i++) {
// 		int currentSum = arr[i];

// 		if (currentSum == sum) {
// 			cout << "Sum found at indexes " << i << endl;
// 			return;
// 		}
// 		else {
// 			// Try all subarrays starting with 'i'
// 			for (int j = i + 1; j < n; j++) {
// 				currentSum += arr[j];

// 				if (currentSum == sum) {
// 					// cout << "Sum found between indexes "
// 					// 	<< i+1 << " and " << j+1 << endl;
// 					return;
// 				}
// 			}
// 		}
// 	}
// 	cout << "No subarray found";
// 	return;
// }

// // Driver Code
// int main()
// {
// 	int arr[] = { 135, 101, 170, 125, 79, 159, 163, 65, 106, 146, 82, 28, 162, 92, 196, 143, 28, 37, 192, 5, 103, 154, 93, 183, 22, 117, 119, 96, 48, 127, 172, 139, 70, 113, 68, 100, 36, 95, 104, 12, 123, 134 };
// 	int n = sizeof(arr) / sizeof(arr[0]);
// 	int sum = 468;
// 	subArraySum(arr, n, sum);
// 	return 0;
// }

// This code is contributed
// by rathbhupendra

// 2 3 6 1 3 6 7 2 4 5 8 1 0 3 2

#include<iostream>
using namespace std;

    int minJumps(int arr[], int n)
    {
        
        // Your code here
        int c=0;
        int i=0;
        while(i<n)
        {
            if(arr[i]==0)
            {
                return -1;
            }
            else
            {
                c=c+1;
                i=i+arr[i];
            }
        }
        return c;
    }

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }

    cout<<minJumps(arr, n);
}