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

   cout << "Ponto A - x: " << pontoA.x << endl;
   cout << "Ponto A - y: " << pontoA.y << endl;
   cout << "Ponto A - z: " << pontoA.z << endl
        << endl;

   pontoB.x = 33;
   pontoB.y = 44;
   pontoB.z = 66;

   cout << "Ponto B - x: " << pontoB.x << endl;
   cout << "Ponto B - y: " << pontoB.y << endl;
   cout << "Ponto B - z: " << pontoB.z << endl
        << endl;

   pontoC.x = 4;
   pontoC.y = 7;
   pontoC.z = 9;

   cout << "Ponto C - x: " << pontoC.x << endl;
   cout << "Ponto C - y: " << pontoC.y << endl;
   cout << "Ponto C - z: " << pontoC.z << endl;

   cout << "\n\n";
   system("pause");
   return 0;
}
