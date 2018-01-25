/*
 * stos_tablica.cpp
 * 
 * Copyright 2018  <>
 */


#include <iostream>



using namespace std;

bool size(int sr,sp) {
    return true;  // jeśli jest miejsce na stosie 
    return false; // w przypadku przepełnienia stosu
    
}

void push(int stos[], int dane, int &sp) {
    if (size(sr,sp)) {
        stos[sp] = dane;
        ++sp;
    } else {
        ;
    }
}

int pop(int stos[], int sp) {
    sp--;
    return stos[sp];
}

int main(int argc, char **argv)
{
    int *stack; //wskaźnik
    int sr;  //rozmiar stosu
    int sp = 0; //wskaźnik pozycji na stosie
    
    cout << "Podaj rozmiar: " ; cin >> sr;
    stack = new int[sr];
    
    push(stack, 4, sp);
    push(stack, 9, sp);
    cout << pop(stack, sp);
    push(stack, 3, sp);
    cout << pop(stack, sp);
    push(stack, 1, sp);
    cout << pop(stack, sp);
    
	
	return 0;
}

