#include <stdio.h>

int main(void) {
 char nome[20];
 int idade;
 float altura;

printf("Digite seu primeiro nome: ");
scanf("%s" , nome);
printf("Digite sua idade: ");
scanf("%d", &idade);
printf("Digite sua altura: ");
scanf("%f", &altura);

printf("%s tem %d anos de idade e mede %.2fm.", nome, idade, altura);
return 1;

}
