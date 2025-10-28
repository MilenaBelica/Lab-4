// Lab-4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
void zad1(int a, int b);
int zad12(int a, int b);
void zad2(int n);

int a, b;
int n;
int c, d;

int main() {

	//zadanie 1
	int wieksza;
	cout << "podaj zmienna a ";
	cin >> a;
    cout << "podaj zmienna b ";
	cin >> b;

	zad1(a, b);
	wieksza = zad12(a, b);
	cout << "wieksza wartosc to " << wieksza << endl;

	//zadanie 2
	cout << "podaj liczbe naturalna n ";
	cin >> n;

	zad2(n);

	//zadanie 3
	char znak;
	cout << "podaj pierwsza liczbe ";
	cin >> c;
	cout << "podaj druga liczbe ";
	cin >> d;
	cout << "podaj jaki typ działania chcesz wykonać (+,-,/,*) ";
	cin >> znak;

	switch (znak){
	case (+): cout << c + d << endl; break;
	case (-): cout << c - d << endl; break;
	case (*): cout << c * d << endl; break;


}

void zad1(int a, int b) {
	if (a > b)
		cout << a << "jest wieksze od " << b << endl;
	else if (a < b)
		cout << a << "jest mniejsze od " << b << endl;
	else
		cout << a << "jest rowne " << b << endl;
}

int zad12(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}

void zad2(int n) {
	for (int i = 1; i <= n; i++) {
		if (n % i == 0)
			cout << "dzielniki n to : " << i << "\t";
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
