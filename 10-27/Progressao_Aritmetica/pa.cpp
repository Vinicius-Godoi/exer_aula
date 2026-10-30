#include <iostream>
#include <windows.h>

using namespace std;



int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int i = 0, r = 0, t = 1, pa = 0;

    cout << "Início: ";
    cin >> i;
    cout << "Razão: ";
    cin >> r;
    cout << "Termo: ";
    cin >> t;

    for(int x = t; x >= 1; x--){
        pa += i * r;
        i--;
        
        cout << pa << endl;
    }

    cout << "\nResultado: " << pa;
    
    cin.ignore();
    getchar();
}