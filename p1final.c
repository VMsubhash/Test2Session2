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
void input(float *x1,float *y1,float *x2,float *y2)
{
  scanf("%f %f",x1,y1);
  scanf("%f %f",x2,y2);
}
void find_distance(float x1,float y1, float x2,float y2,float *dist)
{
  float X,Y;
  X=(x1-x2)*(x1-x2);
  Y=(y1-y2)*(y1-y2);
  *dist=my_sqrt(X+Y);
}
void output(float x1,float y1,float x2,float y2,float dist)
{
  printf("distance between the point (%f,%f) and (%f,%f) is \n",x1,y1,x2,y2);
  printf("%f units",dist);
}
int main()
{
  printf("enter the two points");
  float x1,x2,y1,y2,dist;
  input(&x1,&y1,&x2,&y2);
  find_distance(x1,y1,x2,y2,&dist);
  output(x1,y1,x2,y2,dist);
}
