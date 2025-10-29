#include <iostream>
#include <cmath>
using namespace std;

int procedura_wieksza(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}
void funkcja_wieksza(int a, int b) {
	if (a > b) {
		cout << "Liczba wieksza: " << a;
	}
	else {
		cout << "Liczba wiekzza: " << b;
	}
}

void dzielniki(int n) {
	cout << "Dzielniki liczby " << n << ": ";
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			cout << i << ", ";
		}
		else {
			continue;
		}
	}
}
float dodawanie(float a, float b) {
	return a + b;
}
float odejmij(float a, float b) {
	return a - b;
}
float mnozenie(float a, float b) {
	return a * b;
}
float dzielenie(float a, float b) {
	return a / b;
}

int potega(int a, int b) {
	return pow(a, b);
}

int silnia(int n) {
	int silnia = 1;
	for (int i = 1; i <= n; i++) {
		silnia *= i;
	}
	return silnia;
}

int potegowanie_reczie(int n) {
	int poczatek = 1;
	for (int i = 0; i < n; i++) {
		poczatek *= 2;
	}
	return poczatek;
}
int potegowanie_biblioteka(int n) {
	return pow(2, n);
}

void losowanie(int x) {
	srand(time(0));
	int ilerazy = 0;
	int losowa;
	double procent;
	for (int i = 1; i <= 10; i++) {
		losowa = 1 + (rand() % 10);
		if (losowa == x) {
			ilerazy += 1;
		}
		cout << losowa << ", ";
	}
	procent = 10 * ilerazy;
	cout << "\nTwoj szczesliwy los pojawil sie " << procent << "%!";
}
int main()
{
	//zad 1
	/*
	int l1, l2;
	cout << "Podaj liczbe 1: ";
	cin >> l1;
	cout << "\nPodaj liczbe 2: ";
	cin >> l2;

	funkcja_wieksza(l1, l2);
	cout << "\n\n" << procedura_wieksza(l1, l2);
	*/

	//zad 2
	/*
	int liczba;
	cout << "Podaj liczbe calkowita, wieksza od 0: ";
	cin >> liczba;
	dzielniki(liczba);
	*/

	//zad 3
	/*
	float a, b;
	char znak;
	char decyzja;
	while (true)
	{
		cout << "Podaj dwie liczby zmiennoprzecinkowe:";
		cout << "\nLiczba pierwsza: ";
		cin >> a;
		cout << "\nLiczba druga: ";
		cin >> b;
		cout << "\nPodaj znak dzialania, ktore chcesz wynokac (+, -, *, /): ";
		cin >> znak;

		switch (znak)
		{
		case '+':
			cout << dodawanie(a, b);
			break;
		case '-':
			cout << odejmij(a, b);
			break;
		case '*':
			cout << mnozenie(a, b);
			break;
		case '/':
			if (b == 0) {
				cout << "\nNie mozna dzielic przez 0!";
			}
			else {
				cout << dzielenie(a, b);
			}
			break;
		default:
			cout << "\nNieprawidlowy znak dzialania!";
			break;
		}
	
		cout << "\nCzy zakonczyc dzialanie programu? (y/n): ";
		cin >> decyzja;

		if (decyzja == 'y' || decyzja == 'Y') {
			return 0;
		}
		else {
			cout << "-----------------------\n";
			continue;
		}
	}*/


	//zad 4
	/*
	int a, b;
	cout << "Podaj dwie liczby calkowite dodatnie: ";
	cout << "\nLiczba 1: ";
	cin >> a;
	cout << "Liczba 2: ";
	cin >> b;
	cout << endl << a << " do potegi " << b << " wynosi: " << potega(a, b);
	*/

	//zad 5
	/*
	int l1;
	cout << "Podaj liczbe: ";
	cin >> l1;
	cout << "Silnia tej liczby wynosi: " << silnia(l1);
	*/

	//zad 6
	/*
	int l1;
	cout << "Podaj liczbe: ";
	cin >> l1;
	cout << "2^" << l1 << " wynosi: " << potegowanie_reczie(l1);
	cout << "\n2^" << l1 << " wynosi: " << potegowanie_biblioteka(l1);
	*/

	//zad 7
	/*
	int los;
	cout << "Podaj swoj szczesliwy numerek (1-10): ";
	cin >> los;
	losowanie(los);
	*/
	return 0;
}