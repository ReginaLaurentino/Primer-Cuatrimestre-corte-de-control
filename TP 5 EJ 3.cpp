

#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;

int main ()
{

    int grupo=0, n, conimpar, conn, porcenin,mayor,porcen,  i=1, ultimo, posi, conp=0, primero, conc=0;
    bool b=true, primo=true, b1=true,b2=true;


    cout <<"INGRESAR UN NUMERO ";
    cin >> n;

    while (grupo <=10)
    {
        cout <<"INGRESAR UN NUMERO ";
        cin >> n;
        grupo++;
        conimpar=0;
        conn=0;
        primo=true;
        b1=true;
        b2=true;


        while (n!=0)
        {
            conn++;


            if (n%2!=0)
            {
                conimpar++;
            }

            while (i<=n)
            {
                if (n%i==0)
                {
                    conp++;
                    i++;




                }
                else
                {
                    i++;
                }





            }
if (conp==2){
                    ultimo= n;
                    posi=conn;
                    primo=false;

}

conp=0;
 i=1;

if (b1==true){
    primero=n;
    b1=false;
} else {
  if (n< primero) {
    primero=n;
  } else {
  b2=false;
  }



}

            cout <<"INGRESAR UN NUMERO ";
            cin >> n;






        }
        cout <<"cambio de grupo"<<endl;



        porcenin= conimpar *100 / conn;

        if (b==true)
        {
            mayor= grupo;
            porcen= porcenin;
            b=false;
        }
        else
        {
            if (porcenin > porcen)
            {
                mayor=grupo;
                porcen=porcenin;
            }


        }

if (primo==true){

    cout <<"no hay primos"<<endl;
} else {

 cout <<"ultimo primo "<< ultimo <<"posicion " <<posi<<endl;
}

if (b2==true) {
    conc++;
}







    }


    cout <<"El mayor grupo es "<< mayor<<endl;
    cout <<" La cantidad de grupos q estan formados de mayor a menor es "<< conc<<endl;




    return 0;
}
