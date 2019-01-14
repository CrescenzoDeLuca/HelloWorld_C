#include <stdio.h>

int main()
{

int rag;
double cir, supp;

printf("si inserisca il raggio == ");
scanf("%d", &rag);

cir = (rag*2)*3.14;
supp = (cir*cir)/4*3.14;

printf("circonferenza == %lf\n", cir);
printf("superficie == %lf\n", supp);

return 0;
}