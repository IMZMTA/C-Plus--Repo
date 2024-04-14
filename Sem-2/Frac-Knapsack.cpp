#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "\nEnter the number of items : ";
    cin >> n;
    float profit[n];
    float weight[n];
    // int n = sizeof(profit) / sizeof(profit[0]);
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
    cout << "]";
    float ratio[n];
    cout << "\nRatio of Items (PROFIT/WEIGHT): [ ";
    for (int i = 0; i < n; i++)
    {
        ratio[i] = profit[i] / weight[i];
        cout << ratio[i] << " ";
    }

    cout << "]";

    // sorting algo (BUBBLE SORT):

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (ratio[j] < ratio[j + 1])
            {
                swap(ratio[j], ratio[j + 1]);
                swap(profit[j], profit[j + 1]);
                swap(weight[j], weight[j + 1]);
            }
        }
    }

    cout << endl<<endl
         << "After sorting " << endl
         << "\nRatio :[ ";

    for (int i = 0; i < n; i++)
    {

        cout << ratio[i] << " ";
    }
    cout << "]"
         << endl;
    cout << "Weight : [ ";
    for (int i = 0; i < n; i++)
    {
        cout << weight[i] << " ";
    }
    cout << "]"
         << endl;
    cout << "Profit : [ ";
    for (int i = 0; i < n; i++)
    {

        cout << profit[i] << " ";
    }
    cout << "]"
         << endl;
    // knapsack algorithm:
    int W;
    cout << "\nEnter the maximum weight : ";
    cin >> W;
    float P = 0;
    int i = 0;
    for (; i < n; i++)
    {
        // To take full value weight
        if (W > 0 && weight[i] <= W)
        {
            W = W - weight[i];
            P = P + profit[i];
        }
        else
        {
            break;
        }
    }
    // to take fractional value weight
    if (W > 0)
    {
        P = P + profit[i] * (W / weight[i]);
    }

    cout << "\nMaximum Profit is : Rs " << P << endl
         << endl;
    return 0;
}

// Mam Code

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// typedef struct
// {
//   int v;
//   int w;
//   float d;
// } Item;
// void input(Item items[], int sizeOfItems)
// {
//   cout << "Enter total " << sizeOfItems << " item's values and weight" << endl;
//   for (int i = 0; i < sizeOfItems; i++)
//   {
//     cout << "Enter " << i + 1 << " V ";
//     cin >> items[i].v;
//     cout << "Enter " << i + 1 << " W ";
//     cin >> items[i].w;
//   }
// }
// void display(Item items[], int sizeOfItems)
// {
//   int i;
//   cout << "values: ";
//   for (i = 0; i < sizeOfItems; i++)
//   {
//     cout << items[i].v << "\t";
//   }
//   cout << endl
//        << "weight: ";
//   for (i = 0; i < sizeOfItems; i++)
//   {
//     cout << items[i].w << "\t";
//   }
//   cout << endl;
// }
// bool compare(Item i1, Item i2)
// {
//   return (i1.d > i2.d);
// }
// float knapsack(Item items[], int sizeOfItems, int W)
// {
//   int i;
//   float totalValue = 0, totalWeight = 0;
//   for (i = 0; i < sizeOfItems; i++)
//   {
//     items[i].d = (float)items[i].v / items[i].w; // typecasting done (v is int and w is also int so we get final value of d as int)
//   }
//   sort(items, items + sizeOfItems, compare);

//   // uncomment if u need to check the data after sortingis done
//   cout << "values : ";
//   for (i = 0; i < sizeOfItems; i++)
//   {
//     cout << items[i].v << "\t";
//   }
//   cout << endl
//        << "weights: ";
//   for (i = 0; i < sizeOfItems; i++)
//   {
//     cout << items[i].w << "\t";
//   }
//   cout << endl
//        << "ratio  : ";
//   for (i = 0; i < sizeOfItems; i++)
//   {
//     cout << items[i].d << "\t";
//   }
//   cout << endl;

//   for (i = 0; i < sizeOfItems; i++)
//   {
//     if (totalWeight + items[i].w <= W)
//     {
//       totalValue += items[i].v;
//       totalWeight += items[i].w;
//     }
//     else
//     {
//       int wt = W - totalWeight;
//       totalValue += (wt * items[i].d);
//       totalWeight += wt;
//       break;
//     }
//   }
//   cout << "Total weight in bag " << totalWeight << endl;
//   return totalValue;
// }
// int main()
// {
//   int W, n;

//   cout << "Enter the no of items";
//   cin >> n;
//   Item items[n];
//   input(items, n);
//   cout << "Entered data \n";
//   display(items, n);
//   cout << "Enter Knapsack weight \n";
//   cin >> W;
//   float mxVal = knapsack(items, n, W);
//   cout << "Max value for " << W << " weight is " << mxVal;
// }