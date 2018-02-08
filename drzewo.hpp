#ifndef DRZEWO_HPP
#define DRZEWO_HPP

struct Wezel{
    int wartosc;
    Wezel *lewy; //wskaźnik do następnego elementu listy
    Wezel *prawy;
};

class Drzewo {
    private: // hermetyzacja danych
     *korzen;
    public: // interfejs publiczny (API klasy)
    
    int wartosc;
    
        Drzewo* stworzWezel(int );
        void dodajWezel(Wezel, *int );
        void wyswietlRosnoco(Wezel * );
    
    
};

#endif
