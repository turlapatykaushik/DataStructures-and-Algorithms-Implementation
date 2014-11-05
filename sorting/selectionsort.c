//Name : T.Kaushik
//Sorting : Selection Sort
//Roll no : IMT2013054
#include<stdio.h>
void main()
{
	long long int s,i,j,temp,array[200000],count=0,position;

	 for(i=0;i<200000;i++)
 	 {
  		 count++;
  		 array[i]=rand();
  	 }
 	 count;
	 for(i=0;i< count-1;i++)
	 {
		position = i;
         	for(j=i+1;j<count;j++)
		{
          	if(array[position]>array[j])
		position=j;
		}
		if (position != i)
		{
               		temp=array[i];
              		array[i]=array[position];
              		array[position]=temp;
           	}
         	
  	}		

  	printf("After sorting is: ");
  	for(i=0;i<count;i++)
     	 printf(" %llu\n",array[i]);


}
