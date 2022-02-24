#include<stdio.h>
int input_array_size()
{
  int a;
  scanf("%d",&a);
  return(a);
}
void init_array(int n,int a[n])
{
  for(int i=2;i<n+1;i++)
    {
      a[i]=i;
    }
}
void erotosthenes_sieve(int n, int a[n])
{
  int k=0;
  for(int i=2;i<n;i++)
    {
      for(int j=i;j<n+2;j=j+i)
        {
          if(k==1)
          {
            a[j]=0;
          }
          k=1;
        }
      k=0;
    }
}
void output(int n,int a[n])
{
  printf("the primes below %d are\n",n);
  for(int i=2;i<n;i++)
    {
      if(a[i]!=0)
      {
        printf("%d,",a[i]);
      }
    }
  printf("\n");
}
int main()
{
  printf("enter the no. below which you require all the primes\n");
  int n;
  n=input_array_size();
  int a[n];
  init_array(n,a);
  erotosthenes_sieve(n,a);
  output(n,a);
}
