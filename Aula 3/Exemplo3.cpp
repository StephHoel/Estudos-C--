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

   pontoA.x = 10;
   pontoA.y = 20;
   pontoA.z = 30;

   cout << "Coordenada x: " << pontoA.x << endl;
   cout << "Coordenada y: " << pontoA.y << endl;
   cout << "Coordenada z: " << pontoA.z << endl;

   cout << "\n\n";
   system("pause");
   return 0;
}
