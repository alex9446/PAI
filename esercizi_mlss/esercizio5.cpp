#include <iostream>
using namespace std;

int main()
{
  int numero;
  cout << "Inserisci un numero maggiore di 0: ";
  cin >> numero;

  if (numero < 1) {
    cerr << "Il numero deve essere maggiore di 0" << endl;
    return 1;
  }

  for (int i = 0; i < numero; i++)
    if (i != (i/2)*2)
      cout << i+1 << " ";
  cout << endl;

  return 0;
}
