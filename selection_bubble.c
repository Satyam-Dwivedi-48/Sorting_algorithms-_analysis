#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include "all.h"

long long int BubbleSort(long int *A,int n)
{
    long int temp;
    long int i;
    long long int count = 0;
    for(i = 0; i < n - 1; i++)
    {
        int noSwaps = 0;
        for (int j = 0; j < n - 1 - i ; j++)
        {
            count++;
            if (A[j + 1] < A[j] )
            {

                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                noSwaps = 1;
            }
        }
        if(noSwaps == 0)
            return count;
    }
}

long long int SelectionSort(long int *A, int n)
{
    long int temp;
    long int i;
    long long int count = 0;
    for(i = 0; i < n - 1; i++)
    {
        long int min = i;
        for(int j = i + 1; j < n; j++)
        {
            count++;
            if(A[j] < A[min])
            {
                min = j;
            }
        }
        if(min != i)
        {
            temp = A[i];
            A[i] = A[min];
            A[min] = temp;
        }
    } 
    return count;
}

int isSorted(long int *a, int n)
{
    for(int i=0; i<n; ++i) {
        for(int j=i+1; j<n; ++j) {
            if(a[i] > a[j]) return 0;
        }
    }
    return 1;
}