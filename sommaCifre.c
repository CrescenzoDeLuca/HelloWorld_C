#include <stdio.h>

int main()
{

int num, res, n;

printf("inserisci un numero da 3 cifre---> ");
scanf("%d", &num);



if(num > 999)
{
   printf("---!!ERROR!!---\n");
}
else
{  
   n=num/100;
   res=n*100;
   num=num-res;
   res=0;
   
   n=n+(num/10);
   res=(num/10)*10;
   num=num-res;
   res=0;
  
   n=n+num;
   
   
   printf("il risultato  e' ---> %d\n", n);
}
}