#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;

int main (){

int art, dia, cant, imp, primersem=0, cuartasem=0, segundasem=0, tercersem=0, artact, recau, acu, masvend, mascant, mayor, sema;
bool b=true;
cout <<"INGRESAR ARTICULO ";
cin >> art ;
cout <<endl;
cout <<"INGRESAR DIA ";
cin >> dia;
cout <<endl;
cout <<"INGRESAR CANTIDAD VENDIDA ";
cin >> cant;
cout <<endl;
cout <<"INGRESAR IMPORTE RECAUDADO ";
cin >> imp;
cout <<endl;


while (art!=0){
    artact=art;
    recau=0;
    acu=0;

    while (art==artact){
         if (dia<=15){
            acu+=cant;
             }
        recau+=imp;
        if (dia<=7){
            primersem+=cant;
        } else {
               if (dia>7&& dia <=15){
                segundasem+=cant;
               } else {
                      if (dia >15 && dia <=23){
                        tercersem+=cant;
                      } else{
                             cuartasem+=cant;
                      }
               }
        }
cout <<"INGRESAR ARTICULO ";
cin >> art ;
cout <<endl;
cout <<"INGRESAR DIA ";
cin >> dia;
cout <<endl;
cout <<"INGRESAR CANTIDAD VENDIDA ";
cin >> cant;
cout <<endl;
cout <<"INGRESAR IMPORTE RECAUDADO ";
cin >> imp;
cout <<endl;
    }
if (b==true){
    masvend=art;
    mascant=acu;
    b=false;
} else {
        if (acu>mascant){
           masvend=art;
           mascant=acu;
        }

}

cout <<"LA RECAUDACION TOTAL DEL ARTICULO ES "<< recau;
if (primersem>segundasem){
    mayor=primersem;
    sema=primersem;
} else {
         mayor=segundasem;
         sema=segundasem;

}
if (tercersem>mayor){
    mayor=tercersem;
    sema=tercersem;
}
if (cuartasem>mayor){
    mayor=cuartasem;
    sema=cuartasem;
}

}

cout <<"Mas vendido " <<masvend << "Mayor semana "<<mayor << sema;


return 0;
}
