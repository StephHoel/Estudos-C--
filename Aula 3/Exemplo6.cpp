#include <iostream>
#include <locale.h> // setlocale
#include <stdlib.h> // system
#include <string>   // Textos em geral

using namespace std;

struct Coordenada{
   int x, y, z;
};

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

   cout << "Ponto B - x: " << pontoB.x << endl;
   cout << "Ponto B - y: " << pontoB.y << endl;
   cout << "Ponto B - z: " << pontoB.z << endl;

   cout << "\n\n";
   system("pause");
   return 0;
}
