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
typedef struct _point
{
  float x,y;
} point ;
typedef struct _line
{
  point p1,p2;
  float distance;
}line ;
point input_point()
{
  point c;
  scanf("%f %f",&c.x,&c.y);
  return(c);
}
void find_length(line *l)
{
  float X=(l->p1.x)-(l->p2.x);
  float Y=(l->p1.y)-(l->p2.y);
  l->distance=my_sqrt((X*X)+(Y*Y));
}
line input_line()
{
  line a;
  a.p1=input_point();
  a.p2=input_point();
  find_length(&a);
  return(a);
}
void output(line l)
{
  printf("length of the line whith points\n(%f,%f) and (%f,%f)\nis %f units\n",l.p1.x,l.p1.y,l.p2.x,l.p2.y,l.distance);
}
int main()
{
  printf("enter the coordinates of two points of the line\n");
  line l;
  l=input_line();
  output(l);
}
