/*
* @turlapatykaushik
* github url : github.com/turlapatykaushik
*/

#include <stdio.h>
#include<stdlib.h>
typedef struct nodeobject
{
	long long int val;
	struct nodeobject *next;
	struct nodeobject *prev;
}node;
void bucket_sort (long long int s[],long int size, int factor);
node *newNode(void);
node *newNode()
{
	node *n = (node *) malloc(sizeof(node));
	if (n == 0) { fprintf(stderr,"out of memory"); exit(-1); }
	return n;
}
void bucket_sort (long long int s[], long int size, int width)
{
	int factor = 10000000000/width;
	width = width * 10;
	
	long int i = 0, j = 0, pos = 0;
	
	node **temp = (node**) malloc(sizeof(node*) * factor);
	for (i = 0; i < size; ++i)
	{
		pos = s[i] / factor;
		
		long long int value = s[i];
		
		//printf("hi %d, %d, %ld, %lld\n",width, factor, pos, s[i]);
		
		node *t = newNode(), *p = temp[pos];
		
			
			t -> val = value;
			
			if(temp[pos] == NULL)
			{
				temp[pos] = newNode();
				t -> prev = temp[pos];
				temp[pos] -> next = t;				
			}
			else
			{
				p = p -> next;
				while(p -> next != NULL && p -> val <= value )
				{
					p = p-> next;
				}	
				if(p -> val > value)
				{
					node* temp2 = p;
					p = p-> prev;
					p -> next = t;
					temp2 -> prev = t;
					t -> next = temp2;
					t -> prev = p;
				}
				else
				{
					t -> prev = p;
					p -> next = t;
				}
			}
		
	}
	for (i = 0; i < factor; ++i)
	{
		if(temp[i] != NULL)
		{
			node* p = temp[i] -> next;
			while(p != NULL)
			{
				s[j++] = p -> val;
				p = p -> next;
			}
		}
	}		
	return;
}
int main()
{
	long long int i, A[200000];
	for(i=0;i<200000;++i)
		A[i]=rand();
	bucket_sort (A, 200000,100);
	printf("Answer\n");
	for (i = 0; i < 200000; ++i)
		printf("%lld\n",A[i]);
	return 0;
}
