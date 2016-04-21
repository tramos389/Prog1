#include <stdio.h>
 int main()
{
    int num1,num2,soma,subtracao,multiplicacao;
    float divisao;
    printf("entre com um numero");
    scanf("%d", &num1);
    printf("entre com outro numero");
    scanf("%d", &num2);
    
   soma = num1 + num2;
   subtracao = num1 - num2;
   multiplicacao = num1 * num2;
   divisao = (float)num1 / num2;
   
   printf("\nsoma=%d", soma);
   printf("\nsubtracao=%d", subtracao); 
   printf("\nmultiplicacao=%d", multiplicacao);
   printf("\ndivisao=%f", divisao);
    
    
    return 0;
}