// chojinnka.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
int main()
{
    int ilosc = 11;
    int aktualne = ilosc;
    for (int i = 0; i < ilosc; i++) {
        for (int x = 0; x < aktualne-1; x++) {
            cout << "o";
        }
        for (int x = ilosc+1; x > aktualne ; x--) {
            cout << "x";
        }
        for (int x = ilosc; x > aktualne; x--) {
            cout << "x";
        }
        for (int x = 0; x < aktualne - 1; x++) {
            cout << "o";
        }
        aktualne--;
        cout << endl;
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
