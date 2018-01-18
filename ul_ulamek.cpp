/*
 * ulamek.cpp
 * 
 * Copyright 2018  <>
 */


#include <iostream>
#include "ul_ulamek.h"

using namespace std;

    Ulamek::Ulamek(int l, int m) {
    licznik = l ;
    if (m != 0) mianownik = m ;
    else {
        cout << "Mianownik nie może być zerem !" ;
        exit(1);
    }
}

void Ulamek::zapisz(int l, int m) {
    licznik = l ;
    if (m != 0) mianownik = m ;
    else {
        cout << "Mianownik nie może być zerem !" ;
        exit(1);
    }
}

void Ulamek::wypisz() {
        cout << licznik << "/" << mianownik ;
        
}

int Ulamek::get_l() {
        return licznik;
}

int Ulamek::get_m() {
        return mianownik;
}

void Ulamek::skracaj() {
    ; // wykorzystaj algorytm Euklidesa optymalny
    
}


