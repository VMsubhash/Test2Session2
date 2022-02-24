#include<stdio.h>
#include<math.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  scanf("%f %f",x1,y1);
  scanf("%f %f",x2,y2);
  scanf("%f %f",x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  float a=0.5*fabs((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2)));
  if(a<0.00001)
  {
    return(1);
  }
  return(0);
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)
{
  printf("the three points (%f,%f),(%f,%f) & (%f,%f)\n",x1,y1,x2,y2,x3,y3);
  if(istriangle==1)
{
  printf("do not form a triangle\n");
}else{
  printf("form a triangle\n");
}
}
int main()
{
  printf("enter the three points\n");
  float x1,x2,x3,y1,y2,y3;
  int istriangle;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  istriangle=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,istriangle);
  return 0;
}

