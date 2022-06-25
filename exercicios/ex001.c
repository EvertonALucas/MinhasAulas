#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    char nome [20];
    int idade;
    float peso;
    printf("Qual e o seu nome? ");
    gets (nome);
    printf("Quantos anos voce tem? ");
    fflush(stdin);
    scanf("%i", &idade);
    printf("Qual e o seu peso? (KG) ");
    fflush(stdin);
    scanf("%f", &peso);
    printf("\n--------------<<<<<<<PROCESSANDO>>>>>>>>----------------\n");
    printf("Muito prazer, %s. Voce tem %i anos e pesa %.2f kilos correto?\n Fim...",&nome, & idade, &peso);


}
