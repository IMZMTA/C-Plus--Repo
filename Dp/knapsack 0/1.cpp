#include <iostream>
using namespace std;

int knapsack(int v[], int w[], int W, int n)
{
    if (W == 0 || n == 0)
    {
        return 0;
    }
    if (w[n - 1] <= W)
    {
        // include
        int k = v[n - 1] + knapsack(v, w, W - w[n-1], n - 1);
        // exclude
        int l = knapsack(v, w, W, n - 1);
        return max(k, l);
    }
    else
    {
        return knapsack(v, w, W, n - 1);
    }
}

int main()
{
    int val[] = {15, 14, 10, 45, 10};
    int wt[] = {2, 5, 1, 3, 4};
    int w = 7;
    int mp = knapsack(val, wt, w, 5);
    cout << "Max profit=" << mp;
    return 0;
}