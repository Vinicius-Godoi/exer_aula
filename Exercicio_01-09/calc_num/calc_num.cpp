#include <iostream>
#include <string>

using namespace std;

int main()
{
    double n, qn, dn = 0;
    
    cout << "Digite um número: " << endl;
    cin >> n;
    
    qn = n*n;
    dn = n*2;
    
    cout << "Seu número: " << n << "\nSeu quadrado: " << qn << "\nSeu dobro: " << dn;
       
    cin.ignore();
    getchar();
}
