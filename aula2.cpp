#include <iostream>
#include <locale.h> // setlocale
#include <stdlib.h> // system
#include <string>   // Textos em geral

using namespace std;

void imprimirMsg();

int main()
{
   setlocale(LC_ALL, "Portuguese");

   imprimirMsg();

   system("pause");
   return 0;
}

void imprimirMsg()
{
   cout << "Alô Mundo!\n\n";
}
