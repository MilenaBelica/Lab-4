// Lab-4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
void zad1(int a, int b);
int zad12(int a, int b);
void zad2(int n);
int zad31(int c, int d);
int zad32(int c, int d);
int zad33(int c, int d);
int zad34(int c, int d);
int zad4(int e, int f);
int zad5(int n);
int zad6(int n2);
int zad61(int n2);
int zad7(int sz);

 

int a, b;
int n;
int c, d;
int e, f;
int n1, n2;
int sz;

int main() {

	
	//zadanie 1
	int wieksza;
	cout << "podaj zmienna a ";
	cin >> a;
	cout << "podaj zmienna b ";
	cin >> b;

	zad1(a, b);
	wieksza = zad12(a, b);
	if (a != b)
		cout << "wieksza wartosc to " << wieksza << endl;
	else
		cout << "wartosci sa sobie rowne" << endl;

	cout << endl;

	//zadanie 2
	cout << "podaj liczbe naturalna n ";
	cin >> n;

	zad2(n);

	cout << endl;

	//zadanie 3
	char znak;
	cout << "podaj pierwsza liczbe ";
	cin >> c;
	cout << "podaj druga liczbe ";
	cin >> d;
	cout << "podaj jaki typ dzialania chcesz wykonac (+,-,/,*) ";
	cin >> znak;

	switch (znak) {
	case ('+'): cout << "wynik dzialania: " << zad31(c, d) << endl; break;
	case ('-'): cout << "wynik dzialania: " << zad32(c,d) << endl; break;
	case ('*'): cout << "wynik dzialania: " << zad33(c,d) << endl; break;
	case ('/'):{
		if (d == 0)
			cout << "Nie mozna dzielic przez 0 !" << endl;
		else
			cout << "wynik dzialania: " << zad34(c,d) << endl; break;
		}
	}
	cout << endl;

	//zadanie 4
	cout << "Podaj liczbe (e): ";
	cin >> e;
	cout << "Podaj liczbe (f): ";
	cin >> f;

	cout << "Wynik z e do potęgi f: " << zad4(e, f) << endl << endl;

	//zadanie 5
	cout << "Podaj liczbe naturalna : ";
	cin >> n1;

	cout << "silnia n! rowna sie: " << zad5(n1) << endl << endl;

	//zadanie 6
	cout << "Podaj liczbe naturalna : ";
	cin >> n2;

	cout << "2 do potegi n-tej rowna sie: " << zad6(n2) << endl;
	cout << "2 do potegi n-tej rowna sie: " << zad61(n2) << endl << endl;

	//zadanie 7
	cout << "Podaj swoj szczesliwy numerek z przedzialu 1-10 : ";
	cin >> sz;
	
	if (sz > 10 || sz < 1) {
		cout << "Podano numerek spoza przedzialu" << endl;
	}
	int ilosc = zad7(sz);
	cout << "Twoj szczesliwy numerek pojawil sie: " << ilosc << " razy." << endl;
	int p = (ilosc / 10) * 100;
	cout << "To " << p << " % wszystkich wylosowanych liczb. " << endl << endl;
	

	//zadanie 8
	for (int k = 0; k <= 100; k++) {
		if (k % 2 == 1)
			cout << (k - 1) / 2 << endl;
		else
			cout << (k / 2) << endl;
	}
}
int zad7(int sz) {
	int count = 0;
	for (int i = 1; i <= 10; i++)
	{
		int x = rand() % 10 + 1;
		cout << x << "\t";

		cout << endl;
		if (x == sz)
			count++;
	}
	return count;
}
int zad61(int n2) {
	return pow(2, n2); //potęgowanie pow(a,b)
}

int zad6(int n2) {
	int wynik2 = 1;
	for (int z = 1; z <= n2; z++)
		wynik2 = wynik2 * 2;
		return wynik2;
}

int zad5(int n1) {
	int wynik1 = 1;
	for (int y = 1; y <= n1; y++)
		wynik1 = wynik1 * y;
		return wynik1;
}


int zad4(int e, int f) {
	int wynik = 1;
	for (int x = 1; x <= f; x++)
		wynik = wynik * e;
		return wynik;
}

int zad31(int c, int d) {
	return c + d;
}
int zad32(int c, int d) {
	return c -d;
}
int zad33(int c, int d) {
	return c * d;
}
int zad34(int c, int d) {
	return c / d;
}

void zad1(int a, int b) {
	if (a > b)
		cout << a << " jest wieksze od " << b << endl;
	else if (a < b)
		cout << a << " jest mniejsze od " << b << endl;
	else
		cout << a << " jest rowne " << b << endl;
}

int zad12(int a, int b) {
		if (a > b)
			return a;
		else if (b > a)
			return b;
		else
			return a,b;
}

void zad2(int n) {
	for (int i = 1; i <= n; i++) {
		if (n % i == 0)
			cout << "dzielniki n to : " << i << "\t" << endl;
	}
}



// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
