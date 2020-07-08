#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;

int main (){
int n, grupo=0, con, suma, menor,pos, menorgru, promedio, mayor, mayorg;
bool b=true, b2=true;



while (grupo <=10){
        cout <<"INGRESAR UN NUMERO ";
cin>> n;
    grupo++;
    con=0;
    suma=0;

    while (n!=0){
        con++;
        suma+=n;
        if (b==true){
            menor=n;
            pos=con;
            b=false;
            menorgru=grupo;
        } else {
                if (n<menor) {
                    menor=n;
                    pos=con;
                    menorgru=grupo;
                }



        }



     cout <<"INGRESAR UN NUMERO ";
     cin>> n;





    }


    promedio= suma/con;

    cout << "EL PROMEDIO DEL GRUPO ES "<< promedio<< endl;
    if (b2==true){
        mayor=promedio;
        mayorg=grupo;
        b2=false;
    } else{
            if (promedio > mayor) {
                mayor=promedio;
                mayorg=grupo;
            }



    }









}



cout <<" EL VALOR MINIMO ES " <<menor <<endl;
cout<< "POSICION " <<pos<<endl;
cout <<"EL MAYOR PROMEDIO ES " << mayor<<endl;
cout<<"DEL GRUPO "<< mayorg;







return 0;
}
