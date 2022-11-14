#include<stdio.h>
/*Divyaranjan Sahoo
Num prime or not*/
int main(){
  int Num,i=2,Div=1;
  printf("Num - ");scanf("%i",&Num);
  while (i<Num){
    if (Num%i==0){
      Div=0;
      break; i+=1;}

  switch(Div){
    case 0: printf("Num is not prime");
     break;
    case 1: printf("Num is a prime");
     break;}
  return 0;}
