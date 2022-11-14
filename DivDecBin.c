#include<stdio.h>
/*Divyaranjan Sahoo
Decimal to Binary*/
int main(){
  int Num,Dec,i,x,Alpha=0,rev=0;
  printf("Enter the number : ");
  scanf("%i",&Num);
  do{x=Num%2;Num/=2;Alpha+=x;Alpha*=10;
  }while(Num!=0);

  while(Alpha!=0){
  rev=rev*10+Alpha%10;Alpha/=10;}
  printf("Binary : %i",rev);
  return 0;}
