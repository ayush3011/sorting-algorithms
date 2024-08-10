#include <bits/stdc++.h>
using namespace std;

int findMax(int A[], int n)
{
    int max = INT32_MIN;
    int i;
    for (i = 0; i < n; i++)
    {
        if (A[i] > max)
            max = A[i];
    }
    return max;
}

void CountSort(int A[], int n)
{
    int i, j, max, *C;
    max = findMax(A, n);
    C = new int[max + 1];
    for (i = 0; i < max + 1; i++)
        C[i] = 0;
    for (i = 0; i < n; i++)
        C[A[i]]++;
    i = 0, j = 0;
    while (j < max + 1)
    {
        if (C[j] > 0)
        {
            A[i++] = j;
            C[j]--;
        }
        else
            j++;
    }
}

int main()
{
    int A[] = {5, 8, 9, 4, 6};
    CountSort(A, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}