#include<stdio.h>

void add();
void mul();
void sub();
void div();

int main()
{
    add();
    mul();
    sub();
    div();
    return 0;

}
void add()
{
    int a,b,c;
    printf("enter the value of A\n");
    scanf("%d",&a);
    printf("enter the value of B\n");
    scanf("%d",&b);
    c=a+b;
    printf(" addition is %d\n ",c);
}
void mul()
{
    int a,b,c;
   // printf("enter the value of A\n");
    //scanf("%d",&a);
    //printf("enter the value of B\n");
    //scanf("%d",&b);
    c=a*b;
    printf(" multiplication is %d\n ",c);
}
void sub()
{
    int a,b,c;
   // printf("enter the value of A\n");
    //scanf("%d",&a);
    //printf("enter the value of B\n");
    //scanf("%d",&b);
    c=a-b;
    printf(" substraction is %d\n",c);
}
void div()
{
    float a,b,c;
   // printf("enter the value of A\n");
    //scanf("%f",&a);
    //printf("enter the value of B\n");
    //scanf("%f",&b);
    c=a/b;
    printf(" division is %f\n",c);
}