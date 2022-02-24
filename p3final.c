#include<stdio.h>
#include<math.h>
float my_sqrt(float fl)
{
    float sqrt;
    float a=fl/2;
    float a2=fl;
    while(fabs(a2-a)>0.00001)
    {
      a2=a;
      a=(a+(fl/a))/2;
    }
    return a;
}
int input_number()
{
  int a;
  scanf("%d",&a);
  return(a);
}
int is_prime(int n)
{
  if(n==1 || n==0)
  {
    return(0);
  }
  for(int i=2;i<my_sqrt(n);i++)
    {
      if(n%i==0)
      {
        return(0);
      }
    }
  return(1);
}
void output(int n, int isprime)
{
  printf("%d is ",n);
  if(is_prime==0)
  {
    printf("not a prime number\n");
  }else{
    printf("a prime number\n");
  }
}
int main()
{
  printf("enter the number\n");
  int n,isprime;
  n=input_number();
  isprime=is_prime(n);
  output(n,isprime);
  return(0);
}
