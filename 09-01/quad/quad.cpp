#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese") ;
    double l;
    
    cout << "Qual o lado do quadrado? ";
    cin >> l;
    
    cout << "Perímetro: " << 4*l << "\n" <<
    "Área: " << l*l << "\n" <<
    "Diagonal: " << l*sqrt(2);
    
    cin.ignore();
    getchar();        
}
