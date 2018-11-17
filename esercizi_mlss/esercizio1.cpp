#include <iostream>
using namespace std;

int main()
{
  int eta;
  cout << "Quanti anni hai? ";
  cin >> eta;
  if (eta < 13)
    cout << "Bambino";
  else if (eta < 18)
    cout << "Adolescente";
  else
    cout << "Adulto";
  cout << endl;

  return 0;
}
