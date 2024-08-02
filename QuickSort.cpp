#include <bits/stdc++.h>
using namespace std;

int Partition(int A[], int l, int h)
{
    int pivot = A[l];
    int i = l, j = h;
    do
    {
        do
        {
            i++;
        } while (i<h && A[i] <= pivot);
        do
        {
            j--;
        } while (j > l && A[j] > pivot);
        if (i < j)
            swap(A[i], A[j]);
    } while (i < j);
    swap(A[l], A[j]);
    return j;
}

void QuickSort(int A[], int l, int h)
{
    int j;
    if (l < h)
    {
        j = Partition(A, l, h);
        QuickSort(A, l, j);
        QuickSort(A, j + 1, h);
    }
}

int main()
{
    int A[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3, INT32_MAX}, n = 11, i;
    QuickSort(A, 0, 10);
    for (i = 0; i < 10; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}