#include<stdio.h>
int main()
{
	int n,a,b;
	long int revnum=0;
	printf("enter five digit number\n");
	scanf("%d",&n);
	
	a=n%10;
	n=n/10;
	revnum=revnum+a*10000L;
	
		a=n%10;
	n=n/10;
	revnum=revnum+a*1000;
	
		a=n%10;
	n=n/10;
	revnum=revnum+a*100;
	
		a=n%10;
	n=n/10;
	revnum=revnum+a*10;
	
		a=n%10;
	n=n/10;
	revnum=revnum+a;
	
	
	printf(" the reversed number of %d is %d ",n,revnum);
}
