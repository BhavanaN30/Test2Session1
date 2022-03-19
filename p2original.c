#include<stdio.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("enter three points\n");
  scanf("%f %f %f %f %f %f",x1,y1,x2,y2,x3,y3);
  }
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  
  float area=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
  if(area==0)
  {
   return 0;
    }
    else
  {
    return 1;
    }
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int is_triangle)
{
  
if(is_triangle==0)
  printf("it  is not triangle ");
  else
if(is_triangle!=0)
printf("it is triangle");
}
int main()
{
  float x1,y1,x2,y2,x3,y3,triangle;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  triangle=is_triangle( x1,y1, x2,y2, x3,y3);
   output(x1,y1, x2,y2,x3, y3,triangle);
     return 0;
}