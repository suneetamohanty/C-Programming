#include<stdio.h>
/*Divyaranjan Sahoo
Evaluating y=x^n*/
int main(){
  int x,n,i;
  printf("Enter the value of x: ");
  scanf("%i",&x);
  printf("Enter the value of n: ");
  scanf("%i",&n);
  for (i=1;i<n;i++) {x*=x;}
  printf("%i",x);
  return 0;}
