#include <iostream>
#include <locale.h> // setlocale
#include <stdlib.h> // system
#include <string>   // Textos em geral

using namespace std;

void imprimirMsg();
float calculaImposto();

int main()
{
   setlocale(LC_ALL, "Portuguese");

   // imprimirMsg();

   float resultado;

   resultado = calculaImposto();

   cout << "Resultado do calculo: " << resultado << "\n\n";

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