/*
 * struktury.cpp
 
 */


#include <iostream>
#include <iomanip>

using namespace std ;

struct osoba {
    char imie[20];
    char nazwisko[20];
    int wiek ;
        
};

//~struct samochod {
    //~char marka[20];
    //~char kolor[20];
    //~int dprodukcji ;
    
//~};

void wyswietlDane(osoba o){
    cout << setw(20) << "Imię: " << o.imie << endl ;
    cout << setw(20) << "Nazwisko: " << o.nazwisko << endl ;
    cout << setw(20) << "Wiek: " << o.wiek << endl ;
    
    }
    
//~void wyswietlDane2(samochod s){
    //~cout << setw(20) << "Marka: " << s.marka << endl ;
    //~cout << setw(20) << "Kolor: " << s.kolor << endl ;
    //~cout << setw(20) << "Data produkcji: " << s.dprodukcji << endl ;
    
    //~}

void getOsoby(osoba t[], int ile){
    for(int i=0; i<ile;i++) {
    cout << "Podaj imię: " ;
    cin >> t[i].imie ; 
    cout << "Podaj nazwisko: " ;
    cin >> t[i].nazwisko ;
    cout << "Podaj wiek: " ;
    cin >> t[i].wiek ; 
    }
}

void drukujOsoby(osoba t[], int ile){
    for(int i=0; i<ile;i++) {
    cout << "Podaj imię: " ;
    cin >> t[i].imie ; 
    cout << "Podaj nazwisko: " ;
    cin >> t[i].nazwisko ;
    cout << "Podaj wiek: " ;
    cin >> t[i].wiek ; 
    }
}

int main(int argc, char **argv)
{
    //osoba uczen1;
    //cout << "Podaj imię: " ;
    //cin >> uczen1.imie ; 
    //cout << "Podaj nazwisko: " ;
    //cin >> uczen1.nazwisko ;
    //cout << "Podaj wiek: " ;
    //cin >> uczen1.wiek ; 
    //wyswietlDane(uczen1);
    
    //samochod pojazd;
    //cout << "Podaj markę: " ;
    //cin >> pojazd.marka ; 
    //cout << "Podaj kolor: " ;
    //cin >> pojazd.kolor ;
    //cout << "Podaj datę produkcji: " ;
    //cin >> pojazd.dprodukcji ; 
    //wyswietlDane2(pojazd);
    
    int ile;
    cout << "Ile osób? "; cin >> ile ;
    osoba tb[ile];
    drukujOsoby(tb, 3);

	return 0;
}

