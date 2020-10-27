#include <stdio.h>
#define clearScreen() printf("\033[H\033[J")

int main(void) {

  char nomeFunc[] = "";
  float salarioA = 0;

  clearScreen();

  printf("Escreva o nome do funcionário: ");
  scanf("%s", nomeFunc);

  printf("\nEntre com o salário atual do funcionário: R$");
  scanf("%f", &salarioA);

  printf("\nO salário atual do funcionário %s é de: R$%6.2f", nomeFunc, salarioA);

  return 0;
}
