#include<stdio.h>
/*Divyaranjan Sahoo
Finding HCF of numbers*/
int main(){
  int Alpha,Beta,i,DivHCF;
  printf("Enter the two numbers - ");
  scanf("%i%i",&Alpha,&Beta);
  for (i=Alpha;i>=1;i--){
    if (Alpha%i==0 && Beta%i==0){
      DivHCF=i;
    break;}}
  printf("The HCF is %i",DivHCF);
  return 0;}
