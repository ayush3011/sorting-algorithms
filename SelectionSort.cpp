#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int A[], int n)
{
    int i, j, k;
    for (i = 0; i < n - 1; i++)
    {
        for (j = k = i; j < n; j++)
        {
            if (A[j] < A[k])
                k = j;
        }
        swap(A[i], A[k]);
    }
}

int main()
{
    int A[] = {5, 8, 9, 4, 6};
    SelectionSort(A, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}