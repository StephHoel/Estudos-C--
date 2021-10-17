#include <iostream>
#include <locale.h> // setlocale
#include <stdlib.h> // system
#include <string>   // Textos em geral

using namespace std;

void imprimirMsg();
float calculaImposto();
int soma(int vlr1, int vlr2);

int main()
{
   setlocale(LC_ALL, "Portuguese");

   // imprimirMsg();

   cout << "Resultado do calculo: " << calculaImposto() << "\n\n";

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