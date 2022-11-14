#include<stdio.h>
/*Divyaranjan Sahoo
Prime numbers in Range*/
int main(){
  int i,a,x,b,Div;
    printf("Enter the lower and upper limit ~  ");
    scanf("%i%i",&a,&b);
    for(i=a;i<=b;i++){
      Div=1;
      for(x=2;x<=i/2;x++){
        if(i%x==0){
          Div=0;
          break;}}
      if(Div==1){
        printf("%i ",i);}}
    return 0;}
