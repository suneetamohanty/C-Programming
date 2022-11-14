#include<stdio.h>
#include<math.h>
/*Divyaranjan Sahoo
Decimal to Binary*/
int main(){
  int Num,Res=0,i,len=0,Alpha=0,Div;
  printf("Enter the Binary : ");
  scanf("%i",&Num);
  int DivNum=Num;
  do{len+=1;Num/=10;}while(Num!=0);
  for(i=0;i<len;i++){
    Div=DivNum%10;
    Res+=(pow(2,i))*Div;
    DivNum/=10;}
  printf("Decimal: %i",Res);
  return 0;}
