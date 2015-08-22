#include <iostream>
#include<string>
#include<stdio.h>

using namespace std;

int binarysearch(int arr[],int l,int r,int p)
{
    int mid;
    mid = (r+l)/2;
    if(arr[mid]==p)
    {
        return mid;
    }
    if(arr[mid]>p)
    {
        return binarysearch(arr,l,mid-1,p);
    }
    if(arr[mid]<p)
    {
        return binarysearch(arr,mid+1,r,p);
    }
    return -1;
}

int main()
{
    int arr[]={1,10,32,45,46,53,57,89,97,678};
    int p = 46;
    int n = sizeof(arr)/sizeof(arr[1]);
    printf("%d is present at index %d", p, binarysearch(arr,0,n-1, p));
    return 0;
}


