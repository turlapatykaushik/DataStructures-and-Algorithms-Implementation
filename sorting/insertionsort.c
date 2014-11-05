//Name : T.Kaushik
//Sorting : Insertion Sort
//Roll no : IMT2013054
#include<stdio.h>
int main()
{
 	 long long int i,j,s=0,temp,a[200000];
  	for(i=0;i<200000;i++)
  	{
    		s++;
   		a[i]=rand();
  	}
  	for(i=1;i<s;i++)
	{
      		temp=a[i];
      		j=i-1;
      		while((temp<a[j])&&(j>=0))
			{
      				a[j+1]=a[j];
          			j=j-1;
      			}
      		a[j+1]=temp;
 	}	

  	printf("After sorting: ");
  	for(i=0;i<s;i++)
      	printf("%llu\n",a[i]);
	return 0;
}
