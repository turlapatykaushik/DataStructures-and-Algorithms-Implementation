//Name : T.Kaushik
//Sorting : Radix Sort
//Roll no : IMT2013054
#include <stdio.h>
#include<stdlib.h>

void print(long long *a, long long n) {
 long long i;
 for (i = 0; i < n; i++)
  printf("%lld\n ", a[i]);
}

void radix_sort(long long *a, long long n) {
 long long i, *b, m = 0, exp = 1;
 b=(long long*)malloc(n*sizeof(long long));

 for (i = 0; i < n; i++) {
  if (a[i] > m)
   m = a[i];
 }

 while (m / exp > 0) {
  long long box[10] = { 0 };
  for (i = 0; i < n; i++)
   box[a[i] / exp % 10]++;
  for (i = 1; i < 10; i++)
   box[i] += box[i - 1];
  for (i = n - 1; i >= 0; i--)
   b[--box[a[i] / exp % 10]] = a[i];
  for (i = 0; i < n; i++)
   a[i] = b[i];
  exp *= 10;


 }
}

int main() {
 long long *a, i, num;
 num=1000000;

 a=(long long*)malloc(num*sizeof(long long));
 	for(i=0;i<1000000;++i)
 			a[i]=rand();

 radix_sort(&a[0], num);

 print(&a[0], num);

 return 0;
}
