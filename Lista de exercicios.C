# Questão 1 #
  
  #include <stdio.h>

int main() {
    int a,b;
    printf("Insira o Numero 1: \n");
    scanf("%d", &a);
    printf("Insira o Numero 2: \n");
    scanf("%d", &b);
    
    printf("Soma: %d", a+b);
    return 0;
}

# Questão 2 #

#include <stdio.h>

int main() {
    int a = 1;
    
    while(a != 0){
    printf("Insira um numero: \n");
    scanf("%d", &a);
    if(a % 2 == 0){
        printf("%d eh par!\n", a);
    }else{
        printf("%d eh impar!\n",a);
    }
    }
}

# Questão 4 #
# Questão 7 #

#include <stdio.h>

int main(){
   
int n1, n2, n3;
   printf("Digite o primeiro numero: ");
   scanf("%d", &;n1);
   printf("Digite o segundo numero: ");
   scanf("%d", &n2);
   printf("Digite o terceiro numero: ");
   scanf("%d", &n3);
   printf("\n");
   if((n1 > n2) & (n1 > n3)){
    printf("Este numero e o maior: %d", n1);
       }
   if((n2 > n1) & (n2 > n3)){
       printf("Este numero e o maior: %d", n2);
          }
   if((n3 > n1) & (n3 > n2)){
       printf("Este numero e o maior: %d", n3);
          }
   
}

# Questão 8 #

#include <stdio.h>
#include <math.h>

int main(){

   float n1 = 0;
   printf("Digite um numero: ");
   scanf("%f", &n1);
 float raiz = sqrt(n1);
   
   printf("A raiz quadrada de %1.0f é: %1.1f\n", n1, raiz);

  float raiz2 = cbrt(n1);
   printf("A raiz cubica de %1.0f é: %1.2f\n", n1, raiz2);
}

# Questão 10 #

#include <stdio.h>
  int main(){
      float lados1, lados2, lados3;
      
      printf("Digite os lados: \n");
      scanf("%f", &lados1);
      scanf("%f", &lados2);
      scanf("%f", &lados3);

      if((lados1 == lados2) && (lados2 == lados3)){
          printf("O triangulo é equilatero");
      }
      if((lados1 != lados2) && (lados2 != lados3)){
          printf("o triagulo é escaleno");
      }
      if((lados1 == lados2) && (lados2 != lados3)){
          printf("o triangulo e isósceles");
      }
      if((lados1 == lados3) && (lados2 != lados3)){
            printf("o triangulo e isósceles");;
        }
      if((lados2 == lados3) && (lados1 != lados3)){
          printf("o triangulo e isósceles");
      }
      
  }

# Questão 25 #

#include <stdio.h>
   int main(){
   float grausC, grausF=0;
     printf("Digite a temperatura em graus Fahrenheit: \n");
     scanf("%f", &grausF);
      grausC = (grausF -32) * 5/9;
     printf("A temperatura em graus Celsius é: %f\n", grausC);
     return 0;
}

# Questão 27 #

#include <stdio.h>

int main() {
    float preco, novoPreco;

    printf("Digite o preço do produto: ");
    scanf("%f", &preco);

    if (preco < 100) {
        novoPreco = preco * 1.10; 
    } else {
        novoPreco = preco * 1.20; 
    }

    printf("O novo preço do produto é: R$ %.2f\n", novoPreco);

    return 0;
}

# Questão 28 #

#include <stdio.h>

int main() {
    float total, valorFinal, parcela;
    int opcao, vezes;

    printf("Digite o total gasto pelo cliente: R$ ");
    scanf("%f", &total);

    printf("\nFormas de pagamento:\n");
    printf("1 - À vista com 10%% de desconto\n");
    printf("2 - Em duas vezes (sem juros)\n");
    printf("3 - De 3 até 10 vezes com 3%% de juros ao mês (somente para compras acima de R$100,00)\n");
    printf("Escolha a opção desejada: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            valorFinal = total * 0.90;
            printf("\nPagamento à vista com 10%% de desconto.\n");
            printf("Valor total a pagar: R$ %.2f\n", valorFinal);
            break;

        case 2:
            parcela = total / 2;
            printf("\nPagamento em 2 vezes sem juros.\n");
            printf("2 parcelas de R$ %.2f (Total: R$ %.2f)\n", parcela, total);
            break;

        case 3:
            if (total <= 100) {
                printf("\nEsta opção só está disponível para compras acima de R$100,00.\n");
            } else {
                printf("Digite o número de parcelas (de 3 até 10): ");
                scanf("%d", &vezes);

                if (vezes < 3 || vezes > 10) {
                    printf("Número de parcelas inválido. Deve estar entre 3 e 10.\n");
                } else {
                    // Juros simples de 3% ao mês
                    valorFinal = total * (1 + (0.03 * vezes));
                    parcela = valorFinal / vezes;
                    printf("\nPagamento em %d vezes com 3%% de juros ao mês.\n", vezes);
                    printf("%d parcelas de R$ %.2f (Total: R$ %.2f)\n", vezes, parcela, valorFinal);
                }
            }
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}

# Questão 44 #

#include <stdio.h>
int main(void){
  float num1,num2,num3;
  float menor, maior, intermediario;
  printf("Digite num1 numeros:\n");
  scanf("%f", &num1);
  printf("Digite num2 numeros:\n");
  scanf("%f", &num2);
  printf("Digite num3 numeros:\n");
  scanf("%f", &num3);
  
  if((num1 >= num2) && (num1 >= num3)){
    maior = num1;
  }
  else if((num2 >= num1) && (num2 >= num3)){
    maior = num2;
  }
  else{
    maior = num3;
  }
if((num1 <= num2) &&(num1 <= num3)){
  menor = num1;
}
  else if((num2 <= num1) && (num2 <= num3)){
    menor = num2;
  }
  else{
    menor = num3;
  }
  intermediario = num1 + num2 + num3 - maior - menor;
  
  printf("    \n<<<<Resultado>>>>\n");
  printf("Maior numero | %.2f\n", maior);
  printf("Numero intermediario | %.2f\n", intermediario);
  printf("Menor numero | %.2f\n", menor);
  printf("----------------------------");
  
}

# Questão 49 #

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroMagico, palpite, tentativas = 0;
  srand(time(NULL));
  numeroMagico = rand() % 501;

  printf("Adivinhe o numero Magico de 0 a 500!\n");

  do{
    printf("digite seu palpite: \n");
    scanf("%d", &palpite);
    tentativas++;

    if (palpite > numeroMagico) {
      printf("Muito alto brother! Tente um número menor, burro demais. \n");
    }
    else if (palpite < numeroMagico) {
      printf("Muito baixo brother! Tente um número maior,burro demais. \n");
    }
    else {
      printf("Finalmente acerto o número em d% tentativas\n", tentativas);
    }
    
    if (tentativas >= 1 && tentativas <= 3) {
      printf("Classificação: Muito cagado!\n");
    } else if (tentativas >= 4 && tentativas <= 6) {
      printf("Classificação: cagado!\n");
    } else if (tentativas >= 7 && tentativas <= 10) {
      printf("Classificação: Normal.\n");
    } else {
      printf("Classificação: Tente novamente burro dms\n");
      }
  } 
while (palpite != numeroMagico); 

return 0;

}

