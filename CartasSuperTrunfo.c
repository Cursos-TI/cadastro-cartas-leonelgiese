#include <stdio.h>

int main(){

  // variaveis referente a carta 1
  char country_1[20];
  char code_1[20];
  char city_1[20];
  int population_1;
  float area_1;
  float pib_1;
  int touristAttract_1;

  // variaveis referente a carta 2
  char country_2[20];
  char code_2[20];
  char city_2[20];
  int population_2;
  float area_2;
  float pib_2;
  int touristAttract_2;
  
  // recebendo os dados da primeira carta
  printf("Vamos iniciar o cadastro de cartas para nosso Super Trunfo!\n");
  printf("Digite o Estado da primeira Carta: \n");
  scanf("%s", &country_1);
  printf("Digite o código da carta: \n");
  scanf("%s", &code_1);
  printf("Digite o nome da Cidade: \n");
  scanf("%s", &city_1);
  printf("Digite a população desta cidade: \n");
  scanf("%d", &population_1);
  printf("Digite a area da cidade em KM²: \n");
  scanf("%f", &area_1);
  printf("Digite o PIB da cidade: \n");
  scanf("%f", &pib_1);
  printf("Digite quantos pontos turisticos essa cidade possui: \n");
  scanf("%d", &touristAttract_1);

  // recebendo os dados da segunda carta
  printf("\nAgora vamos aos dados da segunda carta!\n");
  printf("Digite o Estado da segunda Carta: \n");
  scanf("%s", &country_2);
  printf("Digite o código da carta: \n");
  scanf("%s", &code_2);
  printf("Digite o nome da Cidade: \n");
  scanf("%s", &city_2);
  printf("Digite a população desta cidade: \n");
  scanf("%d", &population_2);
  printf("Digite a area da cidade em KM²: \n");
  scanf("%f", &area_2);
  printf("Digite o PIB da cidade: \n");
  scanf("%f", &pib_2);
  printf("Digite quantos pontos turisticos essa cidade possui: \n");
  scanf("%d", &touristAttract_2);

  // mostrando os dados das cartas OBS. entendi o conceito de imprimir os dados em uma chamada de printf, mas mesmo que fique mais extenso, achei muito mais legivel separar linha a linha
  printf("\nDados da carta 1:\n");
  printf("Estado: %s\n", country_1);
  printf("Código: %s\n", code_1);
  printf("Cidade: %s\n", city_1);
  printf("População: %d\n", population_1);
  printf("Área: %.3f KM²\n", area_1);
  printf("PIB: R$%.2f bilhões de reais\n", pib_1);
  printf("Pontos turísticos: %d\n", touristAttract_1);

  // imprimindo os dados da segunda carta
  printf("\nDados da carta 2:\n");
  printf("Estado: %s\n", country_2);
  printf("Código: %s\n", code_2);
  printf("Cidade: %s\n", city_2);
  printf("População: %d\n", population_2);
  printf("Área: %.3f KM²\n", area_2);
  printf("PIB: R$%.2f bilhões de reais\n", pib_2);
  printf("Pontos turísticos: %d\n\n", touristAttract_2);
  
  return 0;

}