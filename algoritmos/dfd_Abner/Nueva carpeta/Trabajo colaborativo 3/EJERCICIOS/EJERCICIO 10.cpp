/*
  Name: Dias Vividos
  Universidad: UNAD Cead - Tunja
  Author: Hector Jaime Avila
  Date: 07/11/10 12:09
  Description: Dada tu fecha de nacimiento (mes, día, año) indicar cuantos 
  días (exactos) han transcurrido desde ese año.
*/

#include<stdio.h>
#include<stdlib.h>
int dia; 
int mes; 
int ano; 
int cad; 
int cad1;
int main()
{
printf("\ningrese el numero del dia de nacimiento");
scanf("%d",&dia);
printf("\ningrese el numero del mes de nacimiento");
printf("\nenero=1");
printf("\nfebrero=2");
printf("\nmarzo=3");
printf("\nabril=4");
printf("\nmayo=5");
printf("\njunio=6");
printf("\njulio=7");
printf("\nagosto=8");
printf("\nseptiembre=9");
printf("\noctubre=10");
printf("\nnobiembre=11");
printf("\ndiciembre=12");
scanf("%d",&mes);
printf("\ningrese el numero del año completo de nacimiento");
scanf("%d",&ano);
if(mes==4||mes==6||mes==9||mes==11)
{
cad1=(30-dia)+(30*3)+(31*7)+(28);
cad=(2010-ano)*cad1;
printf("los dias vividos son:%d",cad);
}
else
{
if (mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12)
cad1=(31-dia)+(30*4)+(31*6)+(28);
cad=(2010-ano)*cad1;
printf("los dias vividos son:%d",cad);
}
if(mes==2)
{
cad1=(28-dia)+(30*4)+(31*7);
cad=(2010-ano)*cad1;
printf("los dias vividos son:%d",cad);
}

system("pause");
return 0;
}
