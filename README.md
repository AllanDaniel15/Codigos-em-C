// #include <stdio.h>

// int main(){
   
// int n1, n2, n3;
//    printf("Digite o primeiro numero: ");
//    scanf("%d", &n1);
//    printf("Digite o segundo numero: ");
//    scanf("%d", &n2);
//    printf("Digite o terceiro numero: ");
//    scanf("%d", &n3);
//    printf("\n");
//    if((n1 > n2) & (n1 > n3)){
//     printf("Este numero e o maior: %d", n1);
//        }
//    if((n2 > n1) & (n2 > n3)){
//        printf("Este numero e o maior: %d", n2);
//           }
//    if((n3 > n1) & (n3 > n2)){
//        printf("Este numero e o maior: %d", n3);
//           }
   
// }

// #include <stdio.h>
// #include <math.h>

// int main(){

//    float n1 = 0;
//    printf("Digite um numero: ");
//    scanf("%f", &n1);
//  float raiz = sqrt(n1);
   
//    printf("A raiz quadrada de %1.0f é: %1.1f\n", n1, raiz);

//   float raiz2 = cbrt(n1);
//    printf("A raiz cubica de %1.0f é: %1.2f\n", n1, raiz2);
// }
// #include <stdio.h>


// int main() {
//     int numero, i;

//     printf("Digite um número para ver a tabuada: ");
//     scanf("%d", &numero);

//     printf("Tabuada do %d:\n", numero);
//     for(i = 1; i <= 10; i++) {
//         printf("%d x %d = %d\n", numero, i, numero * i);
//     }

//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int num;

//     printf("Digite um numero: \n");
//     scanf("%d", &num);
//     if(num % 2 == 0)
//     printf("O numero e par. \n");
//     else{
//         printf("O numero e impar. \n" );
//     }
    
// }

// #include <stdio.h>
//   int main(){
//       float lados1, lados2, lados3;
      
//       printf("Digite os lados: \n");
//       scanf("%f", &lados1);
//       scanf("%f", &lados2);
//       scanf("%f", &lados3);

//       if((lados1 == lados2) && (lados2 == lados3)){
//           printf("O triangulo é equilatero");
//       }
//       if((lados1 != lados2) && (lados2 != lados3)){
//           printf("o triagulo é escaleno");
//       }
//       if((lados1 == lados2) && (lados2 != lados3)){
//           printf("o triangulo e isósceles");
//       }
//       if((lados1 == lados3) && (lados2 != lados3)){
//             printf("o triangulo e isósceles");;
//         }
//       if((lados2 == lados3) && (lados1 != lados3)){
//           printf("o triangulo e isósceles");
//       }
      
//   }

// #include <stdio.h>
//    int main(){
//    float grausC, grausF=0;
//      printf("Digite a temperatura em graus Fahrenheit: \n");
//      scanf("%f", &grausF);
//       grausC = (grausF -32) * 5/9;
//      printf("A temperatura em graus Celsius é: %f\n", grausC);
//      return 0;
// }

// #include <stdio.h>

// int main() {
//     float preco, novoPreco;

//     printf("Digite o preço do produto: ");
//     scanf("%f", &preco);

//     if (preco < 100) {
//         novoPreco = preco * 1.10; 
//     } else {
//         novoPreco = preco * 1.20; 
//     }

//     printf("O novo preço do produto é: R$ %.2f\n", novoPreco);

//     return 0;
// }
