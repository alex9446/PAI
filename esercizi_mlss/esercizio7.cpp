#include <iostream>
using namespace std;

int main()
{
  int contribuenti;
  cout << "Totale contribuenti? ";
  cin >> contribuenti;
  string nomi[contribuenti];
  string nome;
  int reddito, up_30k=0;
  cout << "Inserisci nomi contribuenti" << endl;
  for (int i=0; i<contribuenti; i++) {
    cout << "Nome? ";
    cin >> nome;
    cout << "Reddito? ";
    cin >> reddito;
    while (reddito < 1) {
      cout << "> 0 " << endl;
      cin >> reddito;
    }
    if (reddito > 30000) {
      nomi[up_30k] = nome;
      up_30k++;
    }
  }
  for (int i=0; i<up_30k; i++)
    cout << nomi[i] << endl;
  cout << "Totale sopra i 30mila: " << up_30k << endl;

  return 0;
}
