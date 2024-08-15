#include <bits/stdc++.h>
using namespace std;

void ShellSort(int A[], int n)
{
    int gap, i, j, temp;
    for (gap = n / 2; gap > 1; gap /= 2)
    {
        for (i = gap; i < n; i++)
        {
            temp = A[i];
            j = i - gap;
            while (j > 0 && A[j] > temp)
            {
                A[j + gap] = A[j];
                j = j - gap;
            }
            A[j + gap] = temp;
        }
    }
}

int main()
{
    int A[] = {5, 8, 9, 4, 6};
    ShellSort(A, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}