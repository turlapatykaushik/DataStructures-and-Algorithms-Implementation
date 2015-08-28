#include<iostream>
using namespace std;
int activity(int start[], int finish[], int n)
{
int x = 1;
cout << x << " ";
for(int i = 1;i < n;i++ )
{
if( start[i]>=finish[x-1])
{
cout << i+1 << " " ;
x=i+1;
}
}
}
int main()
{
int start[] = {1,3,0,5,3,5,6,8,8,2,12};
int finish[] = {4,5,6,7,8,9,10,11,12,13,14};
int n = sizeof(start)/sizeof(start[0]);
activity(start,finish,n);
return 0;
}

