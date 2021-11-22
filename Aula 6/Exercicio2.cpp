#include <iostream>
#include <locale.h> // setlocale
#include <stdlib.h> // system
#include <string>   // Textos em geral

#define TAM 100

using namespace std;

void push(float p[], int &t, float v);
float pop(float p[], int &t);

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int t = -1; // Inicialização
   float a, b, p[TAM];

   char s[10];

   system("cls");
   system("color f1");
   cout << "\n********************************************";
   cout << "\n* Calculadora de quatro operacoes pos-fixa *";
   cout << "\n* Digite os valores e depois o operador    *";
   cout << "\n* Para sair, digite s                      *";
   cout << "\n********************************************\n";

   do
   {
      cout << ": ";
      cin >> s;

      switch (s[0])
      {
      case '+':
         a = pop(p, t);
         b = pop(p, t);
         cout << a + b << "\n\n";
         push(p, t, a + b);
         break;

      case '-':
         a = pop(p, t);
         b = pop(p, t);
         cout << b - a << "\n\n";
         push(p, t, b - a);
         break;

      case '*':
         a = pop(p, t);
         b = pop(p, t);
         cout << a * b << "\n\n";
         push(p, t, a * b);
         break;

      case '/':
         a = pop(p, t);
         b = pop(p, t);
         if (a == 0)
            cout << "Operacao invalida: divisao por 0\n\n";
         else
         {
            cout << b / a << "\n\n";
            push(p, t, b / a);
         }
         break;

      default:
         push(p, t, atof(s));
      }
   } while (s[0] != 's');

   system("pause");
}

/* Insere o elemento na pilha */
void push(float p[], int &t, float v)
{
   if (t == TAM - 1)
      cout << "\nAtencao!\nPilha Cheia\n";
   else
   {
      t++;      // atualiza o topo
      p[t] = v; // pilha recebe valor
   }
}

/* Remove o elemento da pilha */
float pop(float p[], int &t)
{
   float v;
   if (t == -1)
   {
      cout << "\nAtencao!\nPilha vazia\n";
      return 0;
   }
   else
   {
      v = p[t]; // guarda o valor do topo
      t--;      // atualiza o topo
      return v;
   }
}