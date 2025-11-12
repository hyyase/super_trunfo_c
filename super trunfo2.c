#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>			

int main() {

	//cidade numero 1(carta super trunfo numero 1)

	printf("carta 1\n");

	printf("\n\n");

	char estado1;
	char codigo1[10];
	char nome1[10];
	int populacao1;
	float area1;
	float pib1;
	int ponto_turistico1;

	
	printf("digite letra referente ao estado de A a H:  \n");
	scanf_s(" %c", &estado1);
	
    printf("Digite codigo:  \n");
	scanf_s("%s", codigo1, 10);

	printf("digite o nome de sua cidade:  \n");
	scanf_s("%s", nome1, 10);

	printf("digite a populacao de sua cidade:  \n");
	scanf_s("%d", &populacao1);

	printf("digite a area de sua cidade em km2:  \n");
	scanf_s("%f", &area1);

	printf("digite o pib de sua cidade:  \n");
	scanf_s("%f", &pib1);

	printf("digite a quantidade de pontos turisticos em sua cidade:  \n");
	scanf_s("%d", &ponto_turistico1);

	printf("\n\n");

	//cidade numero 2(carta super trunfo numero 2)

	printf("carta 2\n");

	printf("\n\n");

	char estado2;
	char codigo2[10];
	char nome2[10];
	int populacao2;
	float area2;
	float pib2;
	int ponto_turistico2;


	printf("digite letra referente ao estado de A a H:  \n");
	scanf_s(" %c", &estado2);

	printf("Digite codigo:  \n");
	scanf_s("%s", codigo2, 10);

	printf("digite o nome de sua cidade:  \n");
	scanf_s("%s", nome2, 10);

	printf("digite a populacao de sua cidade:  \n");
	scanf_s("%d", &populacao2);

	printf("digite a area de sua cidade em km2:  \n");
	scanf_s("%f", &area2);

	printf("digite o pib de sua cidade:  \n");
	scanf_s("%f", &pib2);

	printf("digite a quantidade de pontos turisticos em sua cidade:  \n");
	scanf_s("%d", &ponto_turistico2);





	return 0;

}