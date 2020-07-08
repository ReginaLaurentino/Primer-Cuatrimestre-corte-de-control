#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;

int main () {
int n, i=0, primo=0, p, pri=0;
cout <<" INGRESRA UN NUMERO: ";
cin >> n;

while (i<10){
    i++;
    p=1;

    while (p<=n) {
        if (n%p==0) {
            primo++;
            p++;
        } else {
        p++;
        }
    }
        if (primo==2){
            pri++;
        }
        primo=0;
        p=1;

 cout <<" INGRESRA UN NUMERO: ";
cin >> n;

    }




cout <<"LA CANTIDAD DE PRIMOS ES " <<pri;






return 0;
}
