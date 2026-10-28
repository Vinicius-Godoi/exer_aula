/* Dada uma dívida de 10 mil reais que cresce a juros de 2,5% ao mês e uma aplicação de 1.500 reais 
com rendimento de 4% ao mês. Escrever um algoritmo que determine o número de meses 
necessários para quitar a dívida com o valor da aplicação. */

#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    double divida = 10000, invest = 1500;
    int mes = 0;
    do{
        divida += divida * 0.025;
        invest += invest * 0.04;
        mes++;
    } while (divida > invest);

    cout << fixed << setprecision(2);
    cout << "Valor final [Dívida]: R$" << divida << endl;
    cout << "Valor final [Investimento]: R$" << invest << endl;
    cout << "Meses: " << mes;

    getchar();
}