#include<stdio.h>

int input_array_size()
{
  int a;
  printf("Enter the array size :\n");
  scanf("%d", &a);
  return a;
}

void init_array(int n, int a[n])
{
  int i;
  for(i=0; i<n; i++)
    {
      a[i]=i+1;
    }
}

void erotosthenes_seive(int n, int a[n])
{
  int i,j;
  for(i=1; i<n; i++)
    {
      if(a[i]==0)
        continue;
      for(j=a[i]+1; j<=n; j++)
        {
          if(j%a[i]==0)
            a[j-1]=0;
        }
    }
}

void output(int n, int a[n])
{
  int i;
  printf("Prime numbers are : \n");
   for(i=0; i<n; i++)
    printf("%d ",a[i]);
}

int main()
{
  int n;
  n=input_array_size();
  int a[n];
  init_array(n,a);
  erotosthenes_seive(n,a);
  output(n,a);
  return 0;
}