#include <stdio.h>

#include <locale.h> //inclusão de locale.h para poder inserir o setlocale para imprimir as letras com acentuações.

int main() {
setlocale (LC_ALL, "Portuguese"); //aqui estou declarando minhas variáveis.

int A, B, soma, subtr, divis, multi; //Solicita ao usuário os números inicial e final.
printf("Insira seu primeiro valor a ser calculado:\n");
scanf("%d", &A);
printf("seu segundo valor a ser calculado:\n");
scanf("%d", &B);

//Atribuição as variáveis de soma, subtração, divisão e multiplicação.
soma = A + B;
subtr = A - B;
divis = A / B;
multi = A * B;

//Exibe o valor total de todas as variáveis criadas.
printf("Valor total da soma dos números: %d.\n", soma);
printf("Valor total da subtração dos números: %d.\n", subtr);
printf("Valor total da divisão dos números:%d.\n", divis);
printf("Valor total da multiplicação dos números:%d.\n", multi);
}
