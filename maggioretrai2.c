#include <stdio.h>

int main()
{
int a, b, max;

printf("inserire due variabili == ");
scanf("%d", &a);
scanf("%d", &b);
max=b;


if(a>b)
   max=a;

printf("il massimo e'== %d\n", max);

return 0;
}