#include<iostream>
#include<conio.h>

using namespace std;
const double pi = 3.1415926535897932384626433832795;

double circ(double raio){
       return 2 * pi * raio;
             
}

int main(){
   setlocale(LC_ALL,"PORTUGUESE");
   
   double r;
   
   cout << "Raio: ";
   cin >> r;
   
   double c = circ(r);
   
   cout << "Cincunferência: " << c << endl;
   
   cin.ignore();
   getchar();
}
