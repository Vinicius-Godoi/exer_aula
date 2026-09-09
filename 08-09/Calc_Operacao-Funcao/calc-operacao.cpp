#include<iostream>
#include<conio.h>

using namespace std;

double soma(double num1, double num2){
    return num1 + num2;
}
double sub(double num1, double num2){
    return num1 - num2;
}
double multi(double num1, double num2){
    return num1 * num2;
}
double div(double num1, double num2){
    if (num2 == 0)
    {
        cout << "Não é possivel dividir por 0!" << endl;
    }
    else
    {
        return num1 / num2;
    }
}

int main(){
   setlocale(LC_ALL,"PORTUGUESE");

   double n1=0, n2=0;
   
   cout << "Informe 2 números: ";
   cin >> n1;
   cin >> n2;
   
   cout << "Soma = " << soma(n1, n2) << endl;
   cout << "Subtração = " << sub(n1, n2) << endl;
   cout << "Multiplicação = " << multi(n1, n2) << endl;
   if (div(n1,n2) != 0){
      cout << "Divisão = " << div(n1, n2) << endl;
   }
   
   
   cin.ignore();
   getchar();
}
