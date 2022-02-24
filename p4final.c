#include<stdio.h>
int input()
{
  int a;
  scanf("%d",&a);
  return a;
}
int find_fibo(int n)
{
  int a=0,b=1,h;
  for(int i=1;i<n;i++)
    {
      h=a;
      a=b;
      b=h+a;
    }
  return(a);
}
void output(int n, int fibo)
{
  printf("the %d'th number of fibonacci series is \n%d\n",n,fibo);
}
int main()
{
  printf("enter the number\n");
  int n,fibo;
  n=input();
  fibo=find_fibo(n);
  output(n,fibo);
  return(0);
}
