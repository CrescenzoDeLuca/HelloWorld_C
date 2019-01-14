#include <stdio.h>

int main()
{
	int a, b, add, sott, mol;
	int div, res;

	printf("inserisci variabili:\n");
	scanf("%d", &a);
	scanf("%d", &b);

	add = a+b;
	sott = a-b;
	mol = a*b;
	div = a/b;
	res = a%b;
	
	printf("addizione == %d\n", add);
	printf("sottrazione == %d\n", sott);
	printf("moltiplicazione == %d\n", mol);
	printf("divisione == %d\n", div);
	printf("resto == %d\n", res);

	return 0;
}