#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include<stdlib.h>
#include<math.h>
#define MAX 50
//unesi 2 polja n brojeva,usporedi dva polja, ako je 1 vece od 2. 
int main()
{
	int n, polje1[MAX], polje2[MAX],i, j=0, bir, temp[MAX];
	int dec[MAX], bin[MAX], oct[MAX], ostatak, pop, deci, drz = 0;
	char hex[MAX];
	deci = 0;
	printf("Unesti velicinu oba polja:");
	scanf("%d",&n);
	printf("Upisi 1. polje:");
	for (i = 0;i < n;i++) {
		scanf("%d", &polje1[i]);
	}
	printf("Upisi 2. polje;");
	for (i = 0;i < n;i++) {
		scanf("%d",&polje2[i]);
	}
	for (i = 0;i < n;i++) {
		if (polje1[i] >= polje2[i]) {
			temp[i] = 1;
		}
		else {
			temp[i] = 0;
		}
	}
	printf("\n Upisi koju operaciju zelis izvesti:");
	printf("\n 1-dekadski");
	printf("\n 2-binarni");
	printf("\n 3-oktalni");
	printf("\n 4-hexdekadski");
	scanf("%d",&bir);
	for (i = 0;i < n;i++) {
		deci = deci + (int)pow(temp[i], 2);
	}
	switch (bir) {
	case 1:
		for (i = 0;i < n;i++) {
			deci = deci + (int)pow(temp[i], 2);
		}
		printf(" % d", deci);
		break;
	case 2:
		for (i = 0;i < n;i++) {
			printf("%d", temp[i]);
		}
		break;
	case 3:
		for (i = 0;i < n;i++) {
			deci = deci + (int)pow(temp[i], 2);
		}
		ostatak = deci;
		i = 1;
		while (ostatak != 0) {
			oct[i++] = ostatak % 8;
			ostatak = ostatak / 8;
		}
		for (j = i-1;j>0;j--) {
			drz = drz*10 + oct[j];
		}
		printf("%d",deci);
		break;
	case 4:
		for (i = 0;i < n;i++) {
			deci = deci + (int)pow(temp[i], 2);
		}
		j = 0;
		ostatak = deci;
		
		while (ostatak != 0) {

			pop = ostatak % 16;

			if (pop < 10) {

				hex[j++] = 48 + pop;
				
			}

			else {

				hex[j++] = 55 + pop;
			}

				ostatak = ostatak / 16;
				

			
		}
		for (i = j-1; i >= 0; i--)

			printf("%c", hex[i]);
		
		break;
	default:
		printf("Kume nesto si sjebo");
	}
}




