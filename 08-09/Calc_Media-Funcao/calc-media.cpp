#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

double calcMedia(int n1, int n2, int n3){
       return (double) (n1+n2+n3)/3;
}

int main(){
   setlocale(LC_ALL,"PORTUGUESE");
   int n1=0, n2=0, n3=0;
   
   cout << "1ª Nota: ";
   cin >> n1;
   
   cout << "2ª Nota: ";
   cin >> n2;
   
   cout << "3ª Nota: ";
   cin >> n3;
   
   cout << fixed << setprecision(2);
   cout << "Média: " << calcMedia(n1,n2,n3) << endl;
   
   
   cin.ignore();
   getchar();
}
