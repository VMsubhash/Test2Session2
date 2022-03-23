#include<stdio.h>
#include<math.h>
float my_sqrt(float fl)
{
    float sqrt;
    float a=fl/2;
    float a2=fl;
    while(fabs(a2-a)>0.000001)
    {
      a2=a;
      a=(a+(fl/a))/2;
    }
    return a;
}
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
  for(int i=2;i<my_sqrt(n);i++)
      for(int j=i+i;j<n+2;j=j+i)
        {
            a[j]=0;
        }
}
void output(int n,int a[n])
{
  printf("the primes below %d are\n",n);
  for(int i=2;i<n;i++)
    {
      if(a[i]!=0)
      {
        printf("%d ",a[i]);
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
