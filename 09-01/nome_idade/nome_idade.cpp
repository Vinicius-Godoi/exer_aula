#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nome;
    int idade;
    
    cout << "Informe seu nome: " << endl;
    cin >> nome;
    
    cout << "Informe sua idade: " << endl;
    cin >> idade;
    
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;     
    
    cin.ignore();
    getchar();
}
