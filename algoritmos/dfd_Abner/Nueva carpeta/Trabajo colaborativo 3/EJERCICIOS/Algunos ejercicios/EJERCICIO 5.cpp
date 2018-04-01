#include <iostream> 
#include <math.h>
#include <stdio.h>
#include <conio.h>
using namespace std;


int main() 
{
    char ca [100];
    int ct;
    int ct1;
    int sw = 0;
    int cont = 0;
    
    cout<<endl<<"Guardar una contrasena: ";
    cin>>ca;
    
    ct = atoi(ca);
    int lcont = strlen(ca);
    cout<<"Tiene 4 intentos despues se bloquera su cuenta"; 
    while (sw == 0)
    {
     
         
    cout<<endl<<"Ingrese contrasena: ";
    cin>>ct1;
    
        if (ct==ct1)
        {
            sw=1;
            cout<<endl<<"------ BIENVENIDO ------";
        }
        else
        {
       cont = cont + 1;
       cout<<endl<<"Intento No : "<<cont<<endl;
       
       
       cout<<endl<<"Error en la contrasena : ";
          
       
       }
       
       if (cont == 3)
       {
       cout<<endl<<"Ultima oportunidad de ingresar contraseña correcta: "<<endl;
       }
       
       if (cont == 4)
       {
       cout<<endl<<"ERROR nivel de error: "<<cont;
       cout<<endl<<"Su cuenta ha sido bloqueada por seguridad ";
       sw=1;
       }                             
     }
     

     cin.get();
     cin.get();
}
