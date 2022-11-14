#include<stdio.h>
/*Divyaranjan Sahoo
Finding LCM of numbers*/
int main(){
  int Alpha,Beta,i,DivHCF,DivLCM;
  printf("Enter the two numbers - ");
  scanf("%i%i",&Alpha,&Beta);
  for (i=Alpha;i>=1;i--){
    if (Alpha%i==0 && Beta%i==0){
      DivHCF=i;
    break;}}
  DivLCM=(Alpha*Beta)/DivHCF;
  printf("The LCM is %i",DivLCM);
  return 0;}
