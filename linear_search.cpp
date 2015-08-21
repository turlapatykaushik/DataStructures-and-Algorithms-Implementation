#include <iostream>
#include<string>
#include<stdio.h>

using namespace std;

int linearsearch(int arr[],int n, int p)
{
    int i;
    for(i=0;i<n;i++)
    {
    if(arr[i]==p)
        return i;
    }
    return -1;

}

int main()
{
    int arr[]={1,10,32,45};
    int p = 32;
    int n = sizeof(arr)/sizeof(arr[1]);
    printf("%d is present at index %d", p, linearsearch(arr, n, p));
    return 0;
}


