// LiczbyPierwsze.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include <iostream> 
#include <string>

void oblicz_ciag_liczb();
void oblicz_jedna_liczbe();
bool czy_liczba_pierwsza(int);
using namespace std;

int main()
{
	char wybor = ' ';
	while (wybor != '3')
	{
		system("cls");
		cout << "Wybierz opcje:" << endl;
		cout << "1. Oblicz ciag liczb od 1 do n" << endl;
		cout << "2. Oblicz konkretna liczbe" << endl;
		cout << "3. Wyjscie z programu" << endl;
		cout <<endl<< "Twoj wybor to: ";
		cin >> wybor;
		if (wybor == '1')
			oblicz_ciag_liczb();
		if (wybor == '2')
			oblicz_jedna_liczbe();
	}
	
	return 0;
}

void oblicz_ciag_liczb() {
	int ile_liczb;
	int ile_bylo_liczb_pierwszych_w_zbiorze = 0;
	cout << "Podaj do ktorej liczby obliczyc liczby pierwsze: ";
	cin >> ile_liczb;

	for (int i = 3; i <= ile_liczb; i++)
	{
		if (czy_liczba_pierwsza(i) == true)
			ile_bylo_liczb_pierwszych_w_zbiorze++;

	}
	cout << "W zbiorze " << ile_liczb << " bylo " << ile_bylo_liczb_pierwszych_w_zbiorze << " liczb pierwszych." << endl;
	getchar();
	getchar();
}

void oblicz_jedna_liczbe() {
	int ktora_liczba;
	bool czy_pierw;
	cout << "Ktora liczbe obliczyc: ";
	cin >> ktora_liczba;
	czy_pierw = czy_liczba_pierwsza(ktora_liczba);
	if (czy_pierw == false)
		cout << "Liczba " << ktora_liczba << " NIE jest liczba pierwsza." << endl;
	getchar();
	getchar();

}

bool czy_liczba_pierwsza(int liczba) {
	float wynik;
	int wynik_lb_naturalna;
	bool czy_pierwsza = true;

	for (int k = 2; k < liczba; k++)
	{
		wynik = (float)liczba / (float)k;
		wynik_lb_naturalna = (int)wynik * k;
		if (wynik_lb_naturalna == liczba)
		{
			czy_pierwsza = false;
		}
	}

	if (czy_pierwsza == true) {
		cout << "Liczba " << liczba << " jest liczba pierwsza." << endl;
	}
	return czy_pierwsza;
}
