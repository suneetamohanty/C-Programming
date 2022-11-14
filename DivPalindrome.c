#include<stdio.h>
/*Divyaranjan Sahoo
Palindrome*/
int main(){
  int num,i,j,len=0,rev,DivNum;
  printf("Enter the number ~ ");
  scanf("%i",&num);
  DivNum=num;
  do{len+=1;DivNum/=10}
  while(DivNum!=0);
  for (i=0;i<=(len/2)+1,i++){
    for (j=len;j>=(len/2)+1,j--){
