#include <bits/stdc++.h>
using namespace std;

void check_sorted(int arr[], int n)
{
    bool isSorted = true;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            isSorted = false;
            break;
        }
    }

    if (isSorted)
    {
        cout << "Sorted" << endl;
    }
    else
    {
        cout << "Not Sorted" << endl;
    }
}