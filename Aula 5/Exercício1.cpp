#include <iostream>
#include <locale.h> // setlocale
#include <stdlib.h> // system
#include <string>   // Textos em geral

using namespace std;

void insere(int codigo[], int &t, int tamanho);
void exibe(int codigo[], int t);
void elemento(int codigo[], int t);

int main()
{
   setlocale(LC_ALL, "Portuguese_Brazil");

   int codigoProduto[5];
   int tam, op;

   // Inicialização
   tam = 0;
   do
   {
      // Obtem a opção
      system("cls");
      cout << "\nMenu - LISTA \n";
      cout << "\n0- Reiniciar a LISTA";
      cout << "\n1- Inserir codigo do produto na LISTA";
      cout << "\n2- Exibir LISTA";
      cout << "\n3- Exibir tamanho da LISTA";
      cout << "\n4- Exibir um elemento da LISTA";
      cout << "\n5- Sair";

      // Obtem a opção
      cout << "\n\nDigite a opcao: ";
      cin >> op;

      system("cls");

      // Executa a ação escolhida
      switch (op)
      {
      case 0: // reinicialização
         tam = 0;
         break;

      case 1:
         insere(codigoProduto, tam, 5);
         break;

      case 2:
         exibe(codigoProduto, tam);
         break;

      case 3:
         cout << "\nTamanho da LISTA: " << tam;
         break;

      case 4:
         elemento(codigoProduto, tam);
         break;

      case 5:
         cout << "\nFinalizando o programa da LISTA.\n";
         break;

      default:
         cout << "\nOpcao invalida.\n";
      }

      cout << "\n\n";
      system("pause");

   } while (op != 5);
}

void insere(int codigo[], int &t, int tamanho)
{
   int prod;

   // Verifica se a lista está cheia
   if (tamanho == t)
      cout << "\nAtencao! \nLista cheia.\n";
   else
   {
      cout << "\nDigite o codigo do produto a ser inserido: ";
      cin >> prod;

      codigo[t] = prod;

      t++;
   }
}

void exibe(int codigo[], int t)
{
   int x;

   // Verifica se tem algum elemento na lista
   if (t == 0)
      cout << "\n Atencao! \nLista vazia.\n";
   else
   {
      cout << "\nRelacao dos Codigos.\n";

      for (x = 0; x < t; x++)
      {
         cout << "\n"
              << codigo[x];
      }
   }
}

void elemento(int codigo[], int t)
{
   int prod, posicao;
   if (t == 0)
      cout << "\nAtencao! \nLista vazia.\n";
   else
   {
      cout << "\nQual a posicao que deseja? ";
      cin >> posicao;
      posicao--;
      if (posicao >= t)
         cout << "\nAtencao! \nNenhum codigo armazenado ou posicao inexistente.\n";
      else
         cout << "\nCodigo: " << codigo[posicao] << "\n";
   }
}
