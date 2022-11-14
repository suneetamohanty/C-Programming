#include<stdio.h>
/*Divyaranjan Sahoo
Sum of Series*/
int main(){
  int n,i,j,Res=0;
  printf("Enter the limit n : ");
  scanf("%i",&n);
  for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
      Res+=j;}}
  printf("%i",Res);
  return 0;}
