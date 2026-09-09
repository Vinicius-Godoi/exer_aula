#include<iostream>
#include<conio.h>
#include <math.h>

using namespace std;

int quadrado(int x){
     return x*x;
}

int cubo(int x){
     return x*x*x;
}

int main(){
   setlocale(LC_ALL,"PORTUGUESE");
   int n = 0;
   
   cout << "Informe um número inteiro: ";
   cin >> n;
   
   int q = quadrado(n);
   int c = cubo(n);
   
   cout << "Cubo de " << n << " = " << c << endl;
   cout << "Quadrado de " << n << " = " << q << endl;
   //Usando função nativa pow()
   cout << "Cubo = " << pow(n,3) << endl;
   cout << "Quadrado = " << pow(n,2) << endl;
   

   cin.ignore();
   getchar();
}
