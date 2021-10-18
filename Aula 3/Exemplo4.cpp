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
   Coordenada pontoC;

   pontoA.x = 10;
   pontoA.y = 20;
   pontoA.z = 30;

   cout << "Coordenada x: " << pontoA.x << endl;
   cout << "Coordenada y: " << pontoA.y << endl;
   cout << "Coordenada z: " << pontoA.z << endl << endl;

   pontoB.x = 33;
   pontoB.y = 44;
   pontoB.z = 66;

   cout << "Coordenada x: " << pontoB.x << endl;
   cout << "Coordenada y: " << pontoB.y << endl;
   cout << "Coordenada z: " << pontoB.z << endl << endl;

   pontoC.x = 4;
   pontoC.y = 7;
   pontoC.z = 9;

   cout << "Coordenada x: " << pontoC.x << endl;
   cout << "Coordenada y: " << pontoC.y << endl;
   cout << "Coordenada z: " << pontoC.z << endl;

   cout << "\n\n";
   system("pause");
   return 0;
}
