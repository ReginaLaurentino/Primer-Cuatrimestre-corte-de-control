

#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;

int main (){
int n, primero, conp, i;
bool b=true, b2=true;

cout <<"INGRESAR UN NUMERO ";
cin>> n;

while (n!=0)  {
     conp=0;
     i=1;


     while (i<=n) {
             if (n%i==0){
                conp++;
                i++;
             }
 else {
    i++;
 }




     }


    if (conp==2) {
        if (b==true){
            primero=n;
            b=false;
        } else {
         if (n>primero){
            primero=n;
         } else {
         b2=false;
         }



        }





    }





  cout <<"INGRESAR UN NUMERO ";
cin>> n;




}
   if (b2==true){
    cout <<"ORDENADOS";
   } else {
   cout <<"DESORDENADOS";
   }





















return 0;
}
