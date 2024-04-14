#include <iostream>
using namespace std;

int knapsack(float v[], float w[], int W, int n)
{
    if (W == 0 || n == 0)
    {
        return 0;
    }
    if (w[n - 1] <= W)
    {
        // include
        int k = v[n - 1] + knapsack(v, w, W - w[n - 1], n - 1);
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
    int n;
    cout << "\nEnter the number of items : ";
    cin >> n;
    float profit[n];
    float weight[n];
    cout << "Weight : [ ";
    for (int i = 0; i < n; i++)
    {
        weight[i] = 1 + rand() % 100;
        cout << weight[i] << " ";
    }
    cout << "]" << endl;
    cout << "Profit : [ ";
    for (int i = 0; i < n; i++)
    {
        profit[i] = 100 + rand() % 100;
        cout << profit[i] << " ";
    }
    cout << "]" << endl;
    int w;
    cout << "Enter the maximum capacity of bag : ";
    cin >> w;
    int mp = knapsack(profit, weight, w, n);
    cout << "Max profit : Rs " << mp;
    return 0;
}