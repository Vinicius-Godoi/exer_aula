/* Determinar  se  um  número  digitado  pelo  usuário  é  primo.  Para  ser  primo,  um  número 
(inteiro positivo) não pode ter mais divisores (sem resto), além dele mesmo e de 1.  */

#include <iostream>
#include <windows.h>

using namespace std;

int eh_primo(int n){
    int i = 2;

    while (i * i <= n){
        if (n % i == 0){
            return 0;
        }

        i++;
    }

    return 1;
}

main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int n = 0;
    

    do{
        cout << "Informe o número: ";
        cin >> n;

        if(n == 0){
            break;
        }

        if(eh_primo(n) == 1){
            cout << "É primo!" << endl;

            cin.ignore();
            getchar();
            system("cls");
        }
        else{
            cout << "Não é primo!" << endl;

            cin.ignore();
            getchar();
            system("cls");
        }

    }while(true);

    cin.ignore();
    getchar();
}