/*
 * Hello.cpp
 
 */


#include <iostream>

using namespace std;


int parzyste(int n)
{   
    int i;
    for(i=0; i<=n; i+=2 )
    cout << i << " " ;
    return i/2;
}

int main(int argc, char **argv)
{
    char imie[100];
    int wiek, n = 0;
    cout << " Podaj swoje imię :" << endl ;
    cin >> imie ;
       cout << " Podaj swój wiek :" << endl ;
    cin >> wiek ;
    cout << " Witaj " << imie << " , urodziłeś się w "<<2017-wiek << endl ;
    if (wiek > 34)
    {
        cout << " Jestem starszy." << endl ;
    }
    else if (wiek < 34)
    {
        cout << " Jestem młodszy." << endl ;
    }
    else if (wiek ==34)
    {
        cout << " Jesteśmy w tym samym wieku. " << endl ;
    }
    
        cout << "Podaj liczbę: ";
        cin >> n ;
        cout << "Parzystych : " << parzyste(n) << endl ;
    
	return 0;
}

