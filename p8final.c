#include<stdio.h>
#include <math.h>
typedef struct point{
float x,y;
}point;
typedef  struct line{
point p1,p2;
float distance;
}line;
typedef struct polygon{
int n;
line l[100];
float perimeter;
}poly;
int input_n()
{
  int x;
  printf("Enter the no of points of the polygon\n");
  scanf("%d",&x);
  return x;
}
point input_p()
{
  point a;
  scanf("%f %f",&a.x,&a.y);
  return a;
}
void input_n_p(int n,point a[n])
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the point %d\n",i+1);
        a[i]=input_p();
    }
}
line input_l(point p1,point p2)
{
  line l;
  l.p1 = p1;
  l.p2 = p2;
  return l;
}
void input_poly(point a[],poly *p)
{
    int i;
    for(i=0;i<p->n-1;i++)
    {
      p->l[i]=input_l(a[i],a[i+1]);
    }
    p->l[i]=input_l(a[0],a[p->n-1]);
}
void find_lenght(line *l)
{
  l->distance =sqrt(pow(l->p1.x - l->p2.x,2)+pow(l->p1.y - l->p2.y,2));
}
void find_perimeter(int n,poly *p)
{
  p->perimeter = 0;
  for(int i=0;i<n;i++)
    {
      find_lenght(&p->l[i]);
      p->perimeter=p->perimeter+p->l[i].distance;
    }
}
int main()
{
  printf("this program is to find the perimeter of a polygon\n");
  poly p;
  p.n=input_n();
  printf("Enter the points in a proper order to get the correct answer\n");
  point a[p.n];
  input_n_p(p.n,a);
  input_poly(a,&p);
  find_perimeter(p.n,&p);
  printf("the perimeter of the given polygon is = %f\n",p.perimeter);
  return 0;
}
