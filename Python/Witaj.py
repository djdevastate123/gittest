#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  Witaj.py

#  

def parzyste(n):
    ile = list(range(0,n+1, 2))
    print(ile)
    return len(ile)

def main(args):
    imie = input("Podaj imię:")
    print ("Cześć", imie)
    wiek = int(input("Podaj wiek:"))
    print ("Urodziłeś się w ", 2017-wiek," roku.")
    if wiek < 26 :
        print ("Jestem starszy.")
    elif wiek > 26 :
        print ("Jestem młodszy.")
    elif wiek == 26 :
        print ("Jesteśmy w tym samym wieku.")
        
    n = int(input("Podaj liczbę:"))
    print("Parzystych: ", parzyste(n))
    return 0
    

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
