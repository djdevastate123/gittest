/*
 * tab_dynamiczne.cpp
 * 
 * Copyright 2018  <>
 * 
 */


#include <iostream>
#include <iomanip>
#include <cstdlib>


using namespace std;

void wprowadzDane(int *t, int ile) {
    for(int i = 0; i < ile; i++){
     cout << "Podaj liczbę : " ;
     //cin >> t[i];
     cout << "Adres komórki : " << (t + i) << endl;
     cin >> *(t + i);   
    }
}

int tab1W() {
    // tworzenie 1-wymiarowej tablicy dynamicznej
    int ile = 0;
    cout << "Ile liczb podasz ? " << endl;
    cin >> ile;
    try{
        int *tab;
        tab = new int[ile];
        wprowadzDane(tab, ile);
        
    } 
    catch(bad_alloc) { 
        cout << "Za mało pamięci !";
        return 1;
    }
    
    return 0;
    
}

void wypelnij2W(int **tab, int w, int k){
    srand(time(NULL));
    for(int i = 0; i < w;i++){
        for(int j = 0; j<k; j++){
            //cout << i << j << endl ;
            tab[i][j] = rand() % 101;
            cout << setw(4) << tab[i][j];
        }
        cout << endl ;
    }
}

int tab2W(){
    int w, k, i;
    cout << "Ile wierszy i kolumn ?" ;
    cin >> w >>k ;
    int **tab; //deklaracja wskaźnika do wskaźnika
    
    try{
        tab = new int *[w]; // utworzenie wskaźników
    } catch(bad_alloc) { 
        cout << "Za mało pamięci !";
        return 1;
    }
    for(i = 0 ; i < w; i++){
         try{
            tab = new int [k];  // utwprzenie tablicy liczb całkowitych
        } 
        catch(bad_alloc) { 
            cout << "Za mało pamięci !";
            return 1;
        }
    }
    wypelnij2W(tab, w, k);
    return 0;
}

int main(int argc, char **argv)
{
    //tab1W();
    tab2W();
	
	return 0;
}

