#include <iostream>
using namespace std;

int main()
{
  double prezzo, sconto, prezzo_scontato;
  cout << "Prezzo: ";
  cin >> prezzo;
  cout << "Sconto: (senza %) ";
  cin >> sconto;
  cout << endl;

  prezzo_scontato = prezzo - prezzo * (sconto / 100);
  cout << "Prezzo originale  " << prezzo << "€" << endl;
  cout << "Sconto            " << sconto << "%" << endl;
  cout << "Prezzo scontato   " << prezzo_scontato << "€" << endl;

  return 0;
}
