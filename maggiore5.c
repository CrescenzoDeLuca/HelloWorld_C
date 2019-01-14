#include <stdio.h>

int main()
{
int a, max, i=0;
printf("inserisci variabile --->\n");
scanf("%d", &max);

while(i != 4){
    printf("inserisci altre variabili --->\n");
    scanf("%d", &a);
     if(a>max){
        max=a;}
    i=i+1;
}

printf("il massimo è == %d\n", max);
return 0;
}