#include <iostream>

using namespace std;

int main() 
{
  int i, n, contDebito, contPromossi;
  double voto, somma, media;

  do 
  {
    cout << "Quanti studenti ci sono in classe?" << endl;
    cin >> n;
  }
  while (n < 0);

  // La variabile contDebito conterà quanti studenti hanno media minore di 6. La
  // variabile contPromossi conterà quanti studenti hanno media maggiore o
  // uguale a 6.
  contDebito = 0;
  contPromossi = 0;
  somma = 0;
  i = 0;
  while (i < n) 
  {
    cout << "Inserisci il voto del " << i + 1 << " alunno" << endl;
    cin >> voto;
    if (voto >= 6) 
    {
      contPromossi = contPromossi + 1;
    } 
    else 
    {
      contDebito = contDebito + 1;
    }
    somma = somma + voto;
    i = i + 1;
  }
  media = somma / n;
  cout << "Saranno promossi " << contPromossi << " studenti. Avranno il debito "
       << contDebito << " studenti" << endl;