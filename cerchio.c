#include <stdio.h>

int main()
{

int rag;
double cir, supp;

printf("si inserisca il raggio == ");
scanf("%d", &rag);

cir = (rag*2.0)*3.14;
supp = (rag*rag)*3.14;

printf("circonferenza == %f\n", cir);
printf("superficie == %f\n", supp);

return 0;
}