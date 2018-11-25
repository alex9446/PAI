#include <iostream>
using namespace std;

int main()
{
  double numero, somma=0, numeri_inseriti=0;
  cout << "Inserisci uno o più numeri (0 per terminare l'input)" << endl;
  cin >> numero;
  while (numero) {
    numeri_inseriti++;
    somma += numero;
    cin >> numero;
  }

  cout << "Media: " << somma/numeri_inseriti << endl;

  return 0;
}
