#include<stdio.h>
int main()
{
static int a;
a=5;
//static int a=10;
printf("Address of variable a is: %d",&a);
return 0;

}
