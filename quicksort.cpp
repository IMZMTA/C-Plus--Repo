#include <iostream>
#include <sys/time.h>
using namespace std;

void generate_random(int arr[], int n)
{
	srand(time(0));
	for(int i=0;i<n;i++)
	{
		arr[i]=rand()%1000;
	}
}

int partition(int arr[], int start, int end)
{

	int pivot = arr[start];

	int count = 0;
	for (int i = start + 1; i <= end; i++) {
		if (arr[i] <= pivot)
			count++;
	}

	int pivotIndex = start + count;

	swap(arr[pivotIndex], arr[start]);

	int i = start, j = end;

	while (i < pivotIndex && j > pivotIndex) {

		while (arr[i] <= pivot) {
			i++;
		}

		while (arr[j] > pivot) {
			j--;
		}

		if (i < pivotIndex && j > pivotIndex) {
			swap(arr[i++], arr[j--]);
		}
	}

	return pivotIndex;
}

void quickSort(int arr[], int start, int end)
{

	if (start >= end)
		return;

	int p = partition(arr, start, end);

	quickSort(arr, start, p - 1);

	quickSort(arr, p + 1, end);
}

int main()
{
	int n;
	cout<<"Enter the number of elements of your choice in array : ";
	cin>>n;
	int arr[n];
	
	struct timeval tv;
    double start,end,elapse;
	gettimeofday(&tv,NULL);
    start=tv.tv_sec+(tv.tv_usec/100000.0);

	generate_random(arr,n);

	cout<<"\nArray before sorting : \n";
	
	for(int i=0;i< n;i++){
		cout<<arr[i]<<" ";
	}

	quickSort(arr, 0, n-1);
	
	cout<<"\nArray after quicksort : "<<endl;

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	gettimeofday(&tv,NULL);
    end=tv.tv_sec+(tv.tv_usec/100000);
    elapse=end-start;
    cout<<endl<<endl<<"Elapse : "<<elapse<<endl;

	return 0;
}