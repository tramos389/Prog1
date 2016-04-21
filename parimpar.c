#include <stdio.h>
 
 int main()
 {
     
     int num , resto;
     
     
 printf("entre com um numero");
 scanf("%d", &num);
 
 resto = num % 2;
 
 if(resto==1)
 { 
     printf("\n Este numero eh impar");
 }
 else
 {
     printf("\n Este numero e par");
 }
 
 return 0;
 }
 
 