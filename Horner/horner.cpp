#include <iostream>
 
using namespace std;
 
int main()
{
        int iloscWspolczynnikow;
        cout << "Podaj ilosc wspolczynikow wielomianu: ";
        cin >> iloscWspolczynnikow;
        if(iloscWspolczynnikow <= 0)
        {
                return 0;
        }
 
        int* wspolczynniki = new int[iloscWspolczynnikow];
        int* wynik = new int[iloscWspolczynnikow];
 
        cout << "Podaj kolejne wspolcznynniki wielomianu od tego przy najwyzszej potedze: ";
        for (int i = 0; i < iloscWspolczynnikow; i++)
        {
                cin >> wspolczynniki[i];
        }
 
        int a;
        cout << "Podaj wspolcznnik a dwumianu x - a: ";
        cin >> a;
        cout << "Wynikiem jest: ";
       
        wynik[0] = wspolczynniki[0];
        for (int i = 1; i < iloscWspolczynnikow; i++)
        {
                wynik[i] = wspolczynniki[i] + wynik[i - 1] * a;
                int potega = iloscWspolczynnikow - i - 1;
                if ((potega == 0 || wynik[i - 1] != 1) && wynik[i - 1] != 0)
                {
                        cout << wynik[i - 1];
                }
                if (potega > 0 && wynik[i - 1] != 0)
                {
                        cout << "x";
                        if (potega > 1)
                        {
                                cout << "^" << potega;
                        }
                }
 
                if (i != iloscWspolczynnikow - 1)
                {
                        if (wynik[i] > 0)
                        {
                                cout << "+";
                        }
                }
        }
        cout << " reszta: " << wynik[iloscWspolczynnikow - 1];
 
        delete[] wspolczynniki;
        delete[] wynik;
        return 0;
}