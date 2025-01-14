#include "all.h"
long long int count;
ptrPair divide(long int *a, int n)
{
   ptrPair pair;
   int p = getPartitionIndex(a, n) + 1;

   pair.first = a;
   pair.firstLen = p;

   pair.second = a + p;
   pair.secondLen = n-p;
   return pair;
}

int getPartitionIndex(long int *a, int n)
{
    int pivot = a[0];
    int i = -1;
    int j = n;
    while(1) {
        do {
            i++;
        } while(a[i] < pivot);
        do {
            j--;
        } while(a[j] > pivot);
        if(j > i) {
            int temp = a[j];
            a[j] = a[i];
            a[i] = temp;
        } else {
            return j;
        }
    }
}

void conquer(long int *a, int n)
{
    ptrPair pair;
    if(!isSorted(a, n)) {
        count=count+1;
        pair = divide(a, n);
        conquer(pair.first, pair.firstLen);
        conquer(pair.second, pair.secondLen);
    }
}

long long int  quickSort(long int *a, int n)
{
    conquer(a, n);
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