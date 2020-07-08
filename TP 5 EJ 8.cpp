#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;

int main ()
{
    int n, ant, grupo=0, posi, contpri, a, i, p, mayor, mayorgrup, mayorpos, mayorpri,cont=0;
    bool b=true, b1=true, b2=true, b3=true, b6=true;

    cout <<"INGRESE UN NUMERO ";
    cin >> n;


    while (cont!=2)
    {
                  posi=0;
        grupo++;
        a=0;
        contpri=0;

         while (n!=0)
        {

            posi++;
            i=1;
            p=0;

            while (i<=n)
            {
                if (n%i==0)
                {
                    p++;
                    i++;
                }
                else
                {
                    i++;
                }
            }
            if (p==2)
            {
                contpri++;
                if (b1==true)
                {
                    mayor=n;
                    b1=false;
                    mayorgrup=grupo;
                    mayorpos=posi;
                } else {
                    if(n>mayor) {
                        mayor=n;
                        mayorgrup=grupo;
                        mayorpos=posi;
                    }
                }
            }



            cout <<"INGRESE UN NUMERO ";
            cin >> n;
                        if ( n==0 && b6==true){
                    ant=n;
                    cont++;
                    b6=false;
                } else {
                     if (n==ant){
                        cont++;
                     } else {
                          cont=0;
                     }

                }


        }

 if (b2==true){
    mayorpri=mayor;
    b2=false;
 }
 else {
    if (mayor > mayorpri){
        mayorpri=mayor;
        mayorgrup=grupo;
        mayorpos=posi;

    }



 }












    }


cout <<"EL MAYOR NUMERO DE PRIMOS ES "<< mayorpri <<endl;
cout <<"DEL GRUPO "<<mayorgrup <<endl;
cout <<"POSICION " <<mayorpos <<endl;







    return 0;
}
