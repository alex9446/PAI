#include <iostream>
using namespace std;

int main()
{
  int numero, somma=0;
  cout << "Inserisci un numero maggiore di 0: ";
  cin >> numero;

  if (numero < 1) {
    cerr << "Il numero deve essere maggiore di 0" << endl;
    return 1;
  }

  for (int i = 0; i < numero; i++)
    somma = somma+i+1;
  cout << somma << endl;

  return 0;
}
