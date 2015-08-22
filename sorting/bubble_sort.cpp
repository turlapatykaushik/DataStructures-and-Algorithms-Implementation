#include<iostream>
#include<stdio.h>
using namespace std;

int swap(int*x,int*y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
	return 0;
}

int bubblesort(int arr[],int n)
{
	int i,j;
	for(int i = 0;i<n-1;i++)
	{
		for(int j =0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
	return 0;
}

void printArray(int arr[], int n)
{
	int i;
	for(int i=0;i<n;i++)
	{
	printf("%d ",arr[i]);
	}
	printf("\n");
	
}

int main()
{
int arr[] = {2,3,1,43,22,54,56,67,64,81,6,32,57};
int n = sizeof(arr)/sizeof(arr[0]);
bubblesort(arr,n);
printf("The sorted array is :\n") ;
printArray(arr,n);
return 0;
}
