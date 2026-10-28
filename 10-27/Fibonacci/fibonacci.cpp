/* A série Fibonacci consiste na sequência de números, onde a soma dos 2 números anteriores forma o 
atual.  Ex:  0,1,1,2,3,5,8,13,21...  Elabore  um  algoritmo  que  mostre  a  sequência  até  um  número  a  ser 
informado pelo usuário, informando a quantidade de número que a série contém. */

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "PORTUGUESE");

    int n1 = 0, n2 = 1, n3 = 0;
    int nvz = 0;
    cout << "Número de sequências: ";
    cin >> nvz;

    do{
        cout << n1 << endl;
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        nvz--;
    }while(nvz > 0);
    
    cin.ignore();
    getchar();
}