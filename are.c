#include<stdio.h>
#define PI 3.14
int main()
{

     // declare variables
     float radius, area,len,wid,area2,area3,b,h;

     // take input
     printf("Enter Radius of Circle(in cm): ");
     scanf("%f",&radius);
      printf("Enter length & width of Rectangle (in cm): ");
      scanf("%f %f",&len,&wid);
      printf("Enter base and height (in cm): ");
       scanf("%f %f", &b, &h);

     // calculate area
     area = PI * radius * radius;
     area2 = len * wid;
     area3 = (0.5 * b * h);


     // display result
     printf("Area of Circle = %.2f cm\n",radius,area);
                          printf("Area of Rectangle= %.3f cm\n",area2);
                          printf("Area of triangle= %.2f cm\n", area3 );

     return 0;
 }

 //#include<stdio.h>
//int main()
//{

     // declare variables
  //   float len, wid, area2;

     // take inputs
    /* printf("Enter length & width of Rectangle (in cm): ");
     scanf("%f %f",&len,&wid);

     // calculate area
     area2 = len * wid;

     // display result
     printf("Area of Rectangle= %.3f cm\n",area2);

     return 0;
}
#include<stdio.h>
int main()
{
     // declare variables
     float b, h, area3;

     // take inputs
     printf("Enter base and height (in cm): ");
     scanf("%f %f", &b, &h);

     // calculate area
     area3 = (0.5 * b * h);

     // display result
     printf("Area of triangle= %.2f cm\n",
                                   area3 );

     return 0;*/
