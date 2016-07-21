#include <stdio.h>
 
int main()
{
  int a, n, fact = 1;
 
  printf("Enter a number to calculate it's factorial\n");
  scanf("%d", &n);
 if(n!=0){
  for (a = 1; a <= n; a++)
    fact = fact * a;
 }else{
 fact=1;
 }
  printf("Factorial of %d = %d\n", n, fact);
 
  return 0;
}