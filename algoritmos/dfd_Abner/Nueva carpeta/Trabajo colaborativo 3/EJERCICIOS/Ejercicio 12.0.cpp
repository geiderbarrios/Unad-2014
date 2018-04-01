/*
  Name: Ventas Vendedores
  Universidad: UNAD Cead - Tunja
  Author: Hector Jaime Avila
  Date: 07/11/10 12:09
  Description: Elabore un programa que lea las ventas de (n) número de 
  vendedores, para los productos (A, B, C, D y C), si los precios de los 
  productos son ($1000, $2345, $3876, $1235 y $550) respectivamente, calcule 
  el número individual y total de productos vendidos, las ventas totales por 
  producto, el promedio total de ventas, el producto mas vendido, el menos 
  vendido, el vendedor que más ventas realizó
*/

#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;

int main() {


int nipa=0;

float nipb;
float nipc;
float nipd;
float nipe;
float ntp;
float vtpa;
float vtpb;
float vtpc;
float vtpd;
float vtpe;
float ptv;
float pmv;
float pmev;
float vmv;
float a;
float suma;
int n;
float A;
int b;
int c;
int d;
int e;
int f;
int VENTAS[200];
nipb=0;
nipc=0;
nipd=0;
nipe=0;
ntp=0;
vtpa=0;
vtpb=0;
vtpc=0;
vtpd=0;
vtpe=0;
ptv=0;
pmv=0;
pmev=0;
vmv=0;
a=0;
suma=0;
cout<<"ingrese la cantidad de vendedores que va a nalizar"<<endl;
cin>>n;
for (a=1;a<=n;a++) {
cout<<"vendedor"<<a<<endl;
cout<<"cantidad del producto A vendida?"<<endl;
cin>>b;
cout<<"cantidad del producto B vendida?"<<endl;
cin>>c;
cout<<"cantidad del producto C vendida?"<<endl;
cin>>d;
cout<<"cantidad del producto D vendida?"<<endl;
cin>>e;
cout<<"cantidad del producto E vendida?"<<endl;
cin>>f;
nipa=suma+b;
nipb=suma+c;
nipc=suma+d;
nipd=suma+e;
nipe=suma+f;
ntp=suma+b+c+d+e+f;
vtpa=1000*b;
vtpb=2345*c;
vtpc=3876*d;
vtpd=1235*e;
vtpe=550*f;
ptv=(vtpa+vtpb+vtpc+vtpd+vtpe)/5;
if (nipa>nipb && nipa>nipc && nipa>nipd && nipa>nipe) {
cout<<"el producto mas vendido es el A"<<endl;
} else {
if (nipb>nipa && nipb>nipc && nipb>nipd && nipb>nipe) {
cout<<"el producto mas vendido es el B"<<endl;
} else {
if (nipc>nipa && nipc>nipb && nipc>nipd && nipc>nipe) {
cout<<"el producto mas vendido es el C"<<endl;
} else {
if (nipd>nipa && nipd>nipb && nipd>nipc && nipd>nipe) {
cout<<"el producto mas vendido es el D"<<endl;
} else {
if (nipe>nipa && nipe>nipb && nipe>nipc && nipe>nipd) {
cout<<"el producto mas vendido es el E"<<endl;
}
}
}
}
}
if (nipa<nipb && nipa<nipc && nipa<nipd && nipa<nipe) {
cout<<"el producto menos vendido es el A"<<endl;
} else {
if (nipb<nipa && nipb<nipc && nipb<nipd && nipb<nipe) {
cout<<"el producto mas vendido es el B"<<endl;
} else {
if (nipc<nipa && nipc<nipb && nipc<nipd && nipc<nipe) {
cout<<"el producto mas vendido es el C"<<endl;
} else {
if (nipd<nipa && nipd<nipb && nipd<nipc && nipd<nipe) {
cout<<"el producto mas vendido es el D"<<endl;
} else {
if (nipe<nipa && nipe<nipb && nipe<nipc && nipe<nipd) {
cout<<"el producto mas vendido es el E"<<endl;
}
}
}
}
}
}
cout<<"el numero de productos A vendidos es:"<<nipa<<endl;
cout<<"el numero de productos B vendidos es:"<<nipb<<endl;
cout<<"el numero de productos C vendidos es:"<<nipc<<endl;
cout<<"el numero de productos D vendidos es:"<<nipd<<endl;
cout<<"el numero de productos E vendidos es:"<<nipe<<endl;
cout<<"el numero total de productos e vendidos es:"<<ntp<<endl;
cout<<"las ventas totales por producto A es:"<<vtpa<<endl;
cout<<"las ventas totales por producto B es:"<<vtpb<<endl;
cout<<"las ventas totales por producto C es:"<<vtpc<<endl;
cout<<"las ventas totales por producto D es:"<<vtpd<<endl;
cout<<"las ventas totales por producto E es:"<<vtpe<<endl;
cout<<"el promedio total de ventas es:"<<ptv<<endl;
system("pause");
return 0;
}
