#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[5]={1,2,3,4,5},i,j,temp;
for(i=0;i<5;i++)

printf(“%d”,a[i]);

for(i=0;i<5-1;i++)
for(j=i+1;j<5;j++)

if(a[i]>a[j])
{   
temp=a[i];
a[i]=a[j];
a[j]=temp;
}

for(i=0;i<5;i++)
printf(“\n%d”,a[i]);

getch();
}
