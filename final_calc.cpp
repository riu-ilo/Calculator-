#include<stdio.h>

int main()
{
char operation[30];
float a [30];
float c;
int i = 0;
int j;
int p;

printf("enter number1: ");
scanf("%f",&a[0]);

while(1)
{
printf("enter the operation: ");
scanf(" %c",&operation[i]);

if (operation[i] == '=')
break;

printf("enter number: ");
scanf("%f",&a[i+1]);



i++;

}
for (j=0;j<i;j++)
{if (operation[j] == '/')
{a[j]=a[j]/a[j+1];
for(p=j+1;p<i;p++)
{a[p]=a[p+1];
operation[p-1]=operation[p];}
i--;
j--;}}

for (j=0;j<i;j++)
{if (operation[j] == '*')
{a[j]=a[j]*a[j+1];
for(p=j+1;p<i;p++)
{a[p]=a[p+1];
operation[p-1]=operation[p];}
i--;
j--;}}

for (j=0;j<i;j++)
{if (operation[j] == '+')
{a[j]=a[j]+a[j+1];
for(p=j+1;p<i;p++)
{a[p]=a[p+1];
operation[p-1]=operation[p];}
i--;
j--;}}

for (j=0;j<i;j++)
{if (operation[j] == '-')
{a[j]=a[j]-a[j+1];
for(p=j+1;p<i;p++)
{a[p]=a[p+1];
operation[p-1]=operation[p];}
i--;
j--;}}

printf("%f",a[0]);
return 0;
}