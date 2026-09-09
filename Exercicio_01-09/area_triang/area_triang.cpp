#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
   double base, altura, area;
   
   cout << "Informe a base do triângulo: " << endl;
   cin >> base;
   
   cout << "Informe a altura do triângulo: " << endl;
   cin >> altura;
   
   area = base * altura / 2.0;
   
   cout << "Área do triângulo: " << area;
   
   getch();
}
