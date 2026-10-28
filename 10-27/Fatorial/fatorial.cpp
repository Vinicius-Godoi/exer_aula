/* O fatorial de um número inteiro consiste na multiplicação dele por todos os outros números menores 
que ele até 1. Exemplo: Fatorial de 5 = 5! = 5*4*3*2*1 = 120. Elabore um algoritmo que calcule o 
fatorial de um número a ser informado pelo usuário. */

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "PORTUGUESE");
    
    int n = 0;

    cout << "Informe um número: ";
    cin >> n;

    int fator = 1;
    do{
        fator *= n;
        n--; 
    }while(n >= 1);

    cout << "Total: " << fator;

    cin.ignore();
    getchar();
}