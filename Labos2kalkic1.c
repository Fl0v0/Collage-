#include<stdio.h>
#define _CRT_SECURE_NO_WARNING
int main() {
	float a1, a2, rez;
	int pot1, pot2;
	char op;
	scanf("%c \n",&op);
	scanf("%f %f", &a1, &a2);
	switch (op)
	{
	case '+':
		rez = a1 + a2;
		printf("%.2f + %.2f = %.2f",a1,a2, rez);
		break;
	case '-':
		rez = a1 - a2;
		printf("%.2f - %.2f = %.2f", a1, a2, rez);
		break;
	case '*':
		rez = a1 * a2;
		printf("%.2f * %.2f = %.2f", a1, a2, rez);
		break;
	case '/':
		rez = a1 / a2;
		printf("%.2f / %.2f = %.2f", a1, a2, rez);
		break;
	case'^':
		printf("nismo jos ucili funkcije kao pow()");
		break;
	default:
		printf("POGRESKA! operator nije podrzan (jos)");
	}


}