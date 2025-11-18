// Laboratorium6.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

//ZAD.1
/*
int suma(int a, int b);

int a = 20;
int b = 10;

int suma(int a, int b) {

	return a + b;
}

int main()
{
	int a = 1;
	int b = 2;

	suma(a, b);

	cout << suma;

	return 0;
}
*/

//ZAD.2
/*
int tab[10];
int rozmiar = 10;
int usun();

int main() {
	int a;
	
	cout << "podaj 10 wartosci calkowitych ";

	for (int i = 0; i < rozmiar; i++) {
		cin >> a;

		tab[i] = a;

	}

	

	for (int i = 0; i < rozmiar; i++) {
		cout << tab[i] << "  ";
	}

	usun();

	cout << "Tablica po usunieciu: ";
	for (int i = 0; i < rozmiar; i++) {
		cout << tab[i] << " ";
	}


	return 0;
}


int usun() {

	int x;

	cout << " ktora pozycje w tabeli usunac?" << endl;
	cin >> x;

	for (int i = x; i < rozmiar - 1; i++) {
		tab[i] = tab[i + 1];
	}

	
	rozmiar--;
		

	return 0;

}
*/

//ZAD.3
/*
float TEMP1[10];
float TEMP2[10];
int INDEKS = 0;

float przelicz(float temperatura);
void zapisz(float temp_podana, float temp_wyliczona);
void wyswietl();

int main() {
	float temp_podana;
	float wynik;

	for (int i = 0; i < 10; i++) {
		cout << "Podaj temperature nr " << i + 1 << ": ";
		cin >> temp_podana;

		wynik = przelicz(temp_podana);
		zapisz(temp_podana, wynik);
	}

	wyswietl();

	return 0;
}

float przelicz(float temperatura) {
	return temperatura + 273.15;
}

void zapisz(float temp_podana, float temp_wyliczona) {
	if (INDEKS < 10) {
		TEMP1[INDEKS] = temp_podana;
		TEMP2[INDEKS] = temp_wyliczona;
		INDEKS++;
	}
	else {
		cout << "Koniec miejsca w tablicy, przeliczenie nie zostanie zapisane" << endl;
	}
}

void wyswietl() {
	for (int i = 0; i < INDEKS; i++) {
		cout << i << ": " << TEMP1[i] << "-> " << TEMP2[i] << endl;
	}
}

*/




// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
