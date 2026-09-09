#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<ctime>
#include<clocale>
#include<string>

/*CONSTRUIR UM PROGRAMA SIMPLES PARA QUE O USU?RIO ADIVINHE UM N?MERO ESCOLHIDO PELO COMPUTADOR*/

using namespace std;


int main(){
   setlocale(LC_ALL, "Portuguese");
   bool dnv = true;
   char resposta;

   while(dnv == true){
      srand(time(0));
      int cpu = (rand()% 6)+1; //F?rmula para n?mero aleat?rio| %6 define o range e depois o n?mero min.
      int user = 0;
      cout << "Adivinhe o n?mero que estou pensando de 1 a 6: ";
      cin >> user;
      
      if (user == cpu){
         cout << "Acertou! O n?mero que eu pensei ?: " << cpu << endl; 
         
         cout << "Deseja continuar?";
         cin >> resposta;

         if (resposta == 's')
         {
            dnv = true;
         }
         else if (resposta == 'n'){
            dnv = false;
         }
         else{
            cout << "resposta inválida";
         }
      }
      else if (user != cpu){
         cout << "Errado! Eu estava pensando em: " << cpu << endl;
         cout << "Deseja continuar?";
         cin >> resposta;

         if (resposta == 's')
         {
            dnv = true;
         }
         else if (resposta == 'n'){
            dnv = false;
         }
         else{
            cout << "resposta inválida";
         }
      }
      else{
         cout << "Isto n?o ? um n?mero v?lido!";
         cout << "Deseja continuar?";
         cin >> resposta;

         if (resposta == 's')
         {
            dnv = true;
         }
         else if (resposta == 'n'){
            dnv = false;
         }
         else{
            cout << "resposta inválida";
         }
      }
    } 
   
   cin.ignore();
   getchar();
}
