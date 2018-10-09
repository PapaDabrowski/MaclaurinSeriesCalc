/*Piotr Dąbrowski,06.11.2017*/
#include <limits.h>
#include <math.h>
#include <stdio.h>
/*funkcje zewnętrzne-ok*/
long long silnia(float n) //silnia
{if(n==0) return 1;
else return n*silnia(n-1);}
long long silnia2n(float s) //silnia 2n
{if(s==0)return 1;
 else return s*silnia2n(s-1);}
int main(void){
/*zmienne*/
float i,n;
float s,h;
float xd,xg,krok;//zmienne główne
float p,potegax,potega1,potega4;
float wartoscx;
float wynik;
float f;
float m,l;

float dzialanie;
/*czyszczenie zmiennych*/
h=0;
m=0;
wynik=1;
f=1;
/*wprowadzanie danych-ok*/
printf("podaj wartość dolnej granicy zmiennej x\n");
scanf("%f",&xd);
printf("podaj wartość górnej granicy zmiennej x\n");
scanf("%f",&xg);
printf("podaj wartość kroku z jakin następuje powiększenie wartości x\n");
scanf("%f",&krok);
printf("podaj liczbę składników szeregu\n");
scanf("%f",&n);
/*sprawdzanie zmiennych*/
if(xd>=-1 && xd<=1){
if(xg>=-1 && xg<=1){
/* wyświetlanie i obliczanie*/
printf("wyniki:\n");
for(i=0;wartoscx<xg;h++){
wartoscx=xd+h*krok;
f=1;
for(f;f<n+1;f++){
p=2*f;
potega4=pow(4,f);
potega1=pow(-1,f);
dzialanie=-2*f+1;
potegax=pow(wartoscx,f);
m=silnia(f)*silnia(f)*dzialanie*potega4;
l=silnia2n(p)*potegax*potega1;
wynik+=l/m;}
printf("Wartość x:                                  Wartość funkcji:\n");
printf("%f                                          %f\n",wartoscx+1,wynik);
wynik=1;}
}
else{printf("zły zakres zmiennej x-g\n");}
}
else
{
  printf("zły zakres zmiennej x-d\n");
}
return 0;
}
