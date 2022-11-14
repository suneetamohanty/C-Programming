#include<stdio.h>
/*Divyaranjan Sahoo
Finding LCM of numbers*/
int main(){
  int Alpha,Beta,i,DivLCM;
  printf("Enter the two numbers - ");
  scanf("%i%i",&Alpha,&Beta);
  for (i=2;i<=Alpha*Beta;i++){
    if (i%Alpha==0 & i%Beta==0){
      DivLCM=i;
    break;}}
  printf("The LCM is %i",DivLCM);
  return 0;}

/*Alter-
LCM = (Alpha*Beta)/HCF*/
