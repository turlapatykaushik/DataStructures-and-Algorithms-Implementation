//Name : T.Kaushik
//Sorting : Shell Sort
//Roll no : IMT2013054
#include<stdio.h>
int main()
{
 	long long int arr[200000],i,j,k,temp,num=0;
 	for(i=0; i<200000; i++)
 		{
  			num++;
			arr[i]=rand(); 
 		}
 	for(i=num/2; i>0; i=i/2)
	{	
   		for(j=i; j<num; j++)
   		{
     			for(k=j-i; k>=0; k=k-i)
     			{	
        			if(arr[k+i]>=arr[k])
            			break;
        			else
        			{
            				temp=arr[k];
            				arr[k]=arr[k+i];
            				arr[k+i]=temp;
       	 			}		
     			}
   		}
 	}
 	printf(" Shell Sorted list \n");
 	for(k=0; k<num; k++)
     	printf("%llu\n",arr[k]);
 	return 0;
}
