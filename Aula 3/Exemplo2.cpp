#include <iostream>
#include <locale.h> // setlocale
#include <stdlib.h> // system
#include <string>   // Textos em geral

using namespace std;



int main()
{
   setlocale(LC_ALL, "Portuguese");

   int x, y, z;

   x = 10;
   y = 20;
   z = 30;

   cout << "Coordenada x: " << x << endl;
   cout << "Coordenada y: " << y << endl;
   cout << "Coordenada z: " << z << endl;

   cout << "\n\n";
   system("pause");
   return 0;
}
