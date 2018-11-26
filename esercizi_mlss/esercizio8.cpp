#include <iostream>
using namespace std;

int main()
{
  int numero, numero_prec=0;
  bool ordinata=true;
  cout << "Inserisci uno o più numeri (0 per terminare l'input)" << endl;
  cin >> numero;
  while (numero) {
    if (numero < numero_prec)
      ordinata = false;
    numero_prec = numero;
    cin >> numero;
  }

  if (ordinata)
    cout << "Ordinata";
  else
    cout << "Non ordinata";
  cout << endl;

  return 0;
}
