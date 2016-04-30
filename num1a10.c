#include <stdio.h>

int main()
{
  int i,multiplicar,numero;
  printf("Diga um numero de 1 a 9\n");  
  scanf("%d", &numero);
  
  
  for(i=1; i<=10; i++)
  {
      multiplicar= numero*i;
      
      printf("\n%dx%d = %d\n",numero,i,multiplicar);
      
      
  }  
    
    
    
    
    
return 0;    
    
}