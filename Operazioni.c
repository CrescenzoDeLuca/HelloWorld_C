#include <stdio.h>


int main(){
int A, B, Add, Sott, Mol;
double Div;
printf("inserisci variabili:\n");
scanf("%d\n",&A);
scanf("%d\n",&B);

Add=A+B;
Sott=A-B;
Mol=A*B;
Div=A/B;

printf("addizione == %d\n ",Add);
printf("sottrazione == %d\n",Sott);
printf("moltiplicazione == %d\n",Mol);
printf("divisione == %lf\n",Div);


return 0;
}