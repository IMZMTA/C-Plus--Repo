#include <iostream>
#include <climits>  // Include the header for INT_MIN
using namespace std;

int maxSubarraySumMixture(int arr[], int size) {
    int maxEndingHere = 0;
    int maxSoFar = INT_MIN;

    for (int i = 0; i < size; ++i) {
        maxEndingHere = max(arr[i], maxEndingHere + arr[i]);
        cout<<maxEndingHere << "-me \n";
        maxSoFar = max(maxSoFar, maxEndingHere);
        cout<<maxSoFar<<"-msf \n";
    }

    return maxSoFar;
}

int main() {
    int arr[] = {2, -3, 4, -1, -2, 1, 5, -3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = maxSubarraySumMixture(arr, size);

    cout << result << endl;

    return 0;
}
