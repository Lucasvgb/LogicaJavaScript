#include <stdio.h>

int main(){

  float nota1, nota2, nota3;
  float media (float nota1, float nota2, float nota3);

  printf("Digite a primeira nota: ");
  scanf("%f",&nota1);

  printf("Digite a primeira nota: ");
  scanf("%f",&nota2);

  printf("Digite a primeira nota: ");
  scanf("%f",&nota3);

  printf("A media das notas eh: %2.f", media(nota1,nota2,nota3));

  return 0;
}

float media (float nota1, float nota2, float nota3){

  nota2 = 2 * nota2;
  nota3 = 2 * nota3;

  return ((nota1 + nota2 + nota3) / 5 );
}