#include<iostream>
#include<stdio.h>
int swap(int*x , int*y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
	return 0;
}

int selectionsort(int arr[],int n)
{
	int minimum_index,i,j;
	for(int i = 0; i < n-1;i++)
	{
		minimum_index = i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j] < arr[minimum_index])
				minimum_index = j;
		}
		swap(&arr[minimum_index],&arr[i]);
	}
	return 0;
}

void printArray(int arr[],int n)
{
	int i;
	for(int i =0;i < n;i++)
	{
		printf("%d ",arr[i]);
		
	}
	printf("\n");
}

int main()
{
	int arr[] = { 2,43,23,65,45,12,9,56,46,35,199,89};
	int n = sizeof(arr)/sizeof(arr[1]);
	selectionsort(arr,n);
	printf("Sorted Array is : \n");
	printArray(arr,n);
	return 0;
}

