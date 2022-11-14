#include<stdio.h>
/*Divyaranjan Sahoo
Perfect Number*/
int main(){
  int num,res=0,i,Div;
  printf("Input the number ~ ");
  scanf("%i",&num);Div=num;
  for(i=1;i<num;i++){
    if(num%i==0){
      res+=i;}}
  if(res==num){
    printf("%i is a perfect Number",num);}
  else{printf("It isn't perfect Number");}
return 0;}
