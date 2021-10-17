#include <iostream>
#include <locale.h> // setlocale
#include <stdlib.h> // system
#include <string>   // Textos em geral

using namespace std;

void imprimirMsg();
float calculaImposto();
int soma(int vlr1, int vlr2);
void alterarDado(int& vlr1);

int main()
{
   setlocale(LC_ALL, "Portuguese");

   // imprimirMsg();

   // cout << "Resultado do calculo: " << calculaImposto() << "\n\n";

   // cout << "Resultado do calculo: " << soma(10, 20) << "\n\n";

   int vlr1;

   vlr1 = 20;

   alterarDado(vlr1);

   cout << "Valor alterado: " << vlr1 << "\n\n";


   system("pause");
   return 0;
}

void imprimirMsg()
{
   cout << "Alô Mundo!\n\n";
}

float calculaImposto(){
   float sal;
   float vlrImposto;

   sal = 2000;

   vlrImposto = sal * 0.1;

   return vlrImposto;
}

int soma(int vlr1, int vlr2){
   int total;

   total = vlr1 + vlr2;

   return total;
}

void alterarDado(int& vlr1){
   vlr1 = 100;
}