#include <bits/stdc++.h>
using namespace std;

// Adaptive Bubble Sort
void BubbleSort(int A[], int n)
{
    int flag;
    for (int i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                swap(A[j], A[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }
}


int main()
{
    int A[] = {5, 8, 9, 4, 6};
    BubbleSort(A, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}