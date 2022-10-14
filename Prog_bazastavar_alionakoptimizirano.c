#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main() {
	int broj, rez = 0, mb;
	int bloksd, jed;

	scanf("%d", &broj);

	bloksd = broj / 10;


	jed = broj % 10;
	//prvi uvjet se ispunjava pretpostavkom
	if (jed == 3 || jed == 4 || jed == 5) {
		rez += bloksd % jed;
		mb = bloksd / jed;

		rez += (mb % jed) * 10;
		mb = mb / jed;

		rez += (mb % jed) * 100;
		mb = mb / jed;

		rez += (mb % jed) * 1000;
		mb = mb / jed;

		rez += (mb % jed) * 10000;
		mb = mb / jed;
		printf("%d", rez);
	}
	else {
		printf("Pogresan unos!");
	}
}





