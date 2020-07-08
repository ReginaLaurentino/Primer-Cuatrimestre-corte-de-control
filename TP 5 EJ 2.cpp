/*2) Dada una lista de números compuesta por 10 grupos y cada grupo separado del siguiente por un cero,
 se pide determinar e informar:

a) Para cada uno de los grupos el máximo de los números pares y el máximo de los números impares.
 b) Para cada uno de los grupos el porcentaje de números negativos y números positivos.
  c) Cuantos números positivos había en total entre los 10 grupos.
  */



#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;

int main () {
int nu, p=0, i=1, n=0, maxpar, maximpar, positivos=0, porcenposi, porcenneg;
bool b=true, b1= true;

cout <<" INGRESAR UN NUMERO: ";
cin >> nu;

while (i<=10) {
    i++;
    while (nu!=0){

        if (nu%2==0){
            if (b==true){
                maxpar=nu;
                b=false;
            } else {
                   if ( nu> maxpar) {
                    maxpar=nu;
                   }

                        }


        } else {
            if (b1==true) {
                maximpar=nu;
                b1=false;


            } else {

            if (nu > maximpar){
                maximpar=nu;
            }

            }



        }
       if (nu>0) {
        p++;
        positivos++;
       } else {
       n++;
       }

cout <<" INGRESAR UN NUMERO: ";
cin >> nu;


    }

porcenposi=p*100/(p+n);
porcenneg= n*100/ (p+n);
cout <<"EL MAXIMO PAR ES "<<maxpar<<endl;
cout <<"EMAXIMO IMPAR ES " << maximpar<<endl;
cout <<"PORCENTAJE POSITIVOS ES " << porcenposi <<endl;
cout <<"PORCENTAJE NEGATIVOS ES " <<porcenneg<< endl;
p=0;
n=0;
b=true;
b1=true;

cout <<" INGRESAR UN NUMERO: ";
cin >> nu;


}





cout <<" LA CANTIDAD DE POSITIVOS ES " <<positivos;









return 0;
}
