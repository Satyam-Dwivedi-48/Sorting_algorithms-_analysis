typedef struct
{
    long int *first, *second;
    long int firstLen, secondLen;
} ptrPair;
extern long long int count;
extern long int count1;
// Quick Sort
ptrPair divide(long int *, int);
int getPartitionIndex(long int *, int);
void conquer(long int *, int);
long long int quickSort(long int *, int);
int isSorted(long int *, int);

//Bubble Sort
long long int BubbleSort(long int *A,int n);
//Selection Sort
long long int SelectionSort(long int *A, int n);

long int mergeSort(long int arr[], long int l, long int r);
// Implement a function which applies merge sort only if
// size of the array is larger than that of parameter
// if not apply insertion sort.
// Use mergeSortedHalfs() and insertionSort() declared above to do the same.


void merge(long int arr[], long int l, long int m, long int r);

unsigned long int merge_Sort(long int arr[], long int l, long int r);