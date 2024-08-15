#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int findMax(int A[], int n)
{
    int max = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        if (A[i] > max)
            max = A[i];
    }
    return max;
}

void Insert(Node *&bin, int value)
{
    Node *temp = new Node;
    temp->data = value;
    temp->next = NULL;
    if (!bin)
    {
        bin = temp;
    }
    else
    {
        Node *p = bin;
        while (p->next)
        {
            p = p->next;
        }
        p->next = temp;
    }
}

int Delete(Node *&bin)
{
    if (!bin)
        return -1;
    Node *temp = bin;
    bin = bin->next;
    int value = temp->data;
    delete temp;
    return value;
}

void BinSort(int A[], int n)
{
    int max, i, j;
    Node **Bins;
    max = findMax(A, n);
    Bins = new Node *[max + 1];

    for (i = 0; i < max + 1; i++)
        Bins[i] = NULL;

    for (i = 0; i < n; i++)
    {
        Insert(Bins[A[i]], A[i]);
    }
    i = 0, j = 0;
    while (i < max + 1)
    {
        while (Bins[i] != NULL)
        {
            A[j++] = Delete(Bins[i]);
        }
        i++;
    }
}

int main()
{
    int A[] = {5, 8, 9, 4, 6};
    BinSort(A, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}