/*
* @turlapatykaushik
* github url : github.com/turlapatykaushik
*/

#include<stdio.h>
void quicksort(long long int [], int , int);
int main()
{
 long long int arr[1000000];
 int i,n;
 for(i=0; i<1000000; i++)
    {
    n++;
    arr[i]=rand();
    }
 quicksort(arr,0,n-1);
 printf("Quick sorted elements are as  : \n");
 for(i=0; i<n; i++)
    printf("%llu\n",arr[i]);
 return 0;
}
void quicksort(long long int arr[1000000], int fst, int last)
{
 int i,j,pivot,tmp;
 if(fst<last)
 {
   pivot=fst;
   i=fst;
   j=last;
   while(i<j)
   {
     while(arr[i]<=arr[pivot] && i<last)
        i++;
     while(arr[j]>arr[pivot])
        j--;
     if(i<j)
     {
        tmp=arr[i];
        arr[i]=arr[j];
        arr[j]=tmp; 
     }
   }
   tmp=arr[pivot];
   arr[pivot]=arr[j];
   arr[j]=tmp;
   quicksort(arr,fst,j-1);
   quicksort(arr,j+1,last);
 }
}
