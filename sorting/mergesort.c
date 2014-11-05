/*
* @turlapatykaushik
* github url : github.com/turlapatykaushik
*/

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void merge(long long int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];
    for(i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for(j = 0; j <= n2; j++)
        R[j] = arr[m + 1+ j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
void mergeSort(long long int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}
 
 
int main()
{
    long long int i,*arr;
    arr=(long long int *)malloc(1000000*sizeof(long long int));
    for(i=0;i<1000000;i++)
        arr[i]=rand();

   
    long long int arr_size = 1000000;
 
   
    mergeSort(arr, 0, arr_size - 1);
 
    for(i=0;i<1000000;i++)
    printf("%lld\n",arr[i]);
    return 0;
}
