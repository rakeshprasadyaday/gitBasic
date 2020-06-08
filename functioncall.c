#include<stdio.h>
#include<string.h>

int functioncall(int, int[], char[]);

int main()
{

int i, a=20;
int arr[5]={10,20,30,40,50};
char str[30]="made easy";
printf("\nvalue of a is %d",a);
for(i=0;i<5;i++)
{
printf("\n value of array[%d] is %d",i ,arr[i]);

}
printf("\n value of str is %s",str);
printf("\n value of functioncall after call is");
a=functioncall(a,arr,str);
printf("\n value of a after is %d",a);
for(i=0;i<5;i++)
{
printf("\n value after of array[%d] is %d",i ,arr[i]);

}
printf("\n value of str after is %s",str);

return 0;
}

int functioncall(int a, int *arr, char *str)
{
int i;
a=a+20;
for(i=0;i<5;i++)
    arr[i]=arr[i]+50;

strcpy(str,"string modified");
return a;
}
