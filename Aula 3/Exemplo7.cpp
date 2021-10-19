#include <iostream>
#include <locale.h> // setlocale
#include <stdlib.h> // system
#include <string>   // Textos em geral

using namespace std;

struct Coordenada{
   int x, y, z;
};

void imprimirDados(Coordenada pto);

int main()
{
   setlocale(LC_ALL, "Portuguese");

   Coordenada pontoA;
   Coordenada pontoB;

   pontoA.x = 10;
   pontoA.y = 20;
   pontoA.z = 30;

   cout << "Digite a coordenada x: ";
   cin >> pontoB.x;

   cout << "Digite a coordenada y: ";
   cin >> pontoB.y;

   cout << "Digite a coordenada z: ";
   cin >> pontoB.z;
   
   cout << endl;

   imprimirDados(pontoA);

   imprimirDados(pontoB);

   cout << "\n\n";
   system("pause");
   return 0;
}

void imprimirDados(Coordenada pto){
   cout << "Ponto - x: " << pto.x << endl;
   cout << "Ponto - y: " << pto.y << endl;
   cout << "Ponto - z: " << pto.z << endl;
   cout << endl;
}