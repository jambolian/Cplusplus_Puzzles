#include <iostream>

using namespace std;

void funktion1();
void funktion2(int x);
void funktion3(int i, double d);

int main()
{
    setlocale(LC_ALL, "de_DE.utf-8");
    cout.setf(ios::boolalpha);

    funktion1();

    int a;
    a = 5;
    funktion2(a);

    int i=1;
    double d=3.14;
    funktion3(i,d);
    return 0;
}


/*
Diese Funktion bekommt keine Argumente (sichtbar an den leeren
runden Klammern) und liefert auch keinen Wert als Ergebnis
zurück. Das ist sichtbar an dem Schlüsselwort "void"
("void" (engl.) = "Leere").
*/
void funktion1()
{
    cout << "In funktion1()\n";
}

// ------------------------------------------------------------------

/*
Das x ist ein Funktionsargument. Sein Gültigkeitsbereich liegt
ausschließlich in dieser Funktion. Eine Änderung dieser Variablen
hat außerhalb dieser Funktion keine Wirkung.
Es ist wie eine lokale Variable, die aber von außerhalb (beim
Aufruf) einen Wert bekommt.
*/
void funktion2(int x)
{
    cout << "In funktion2(int): x = " << x << endl;
    x = 7;
}

// ------------------------------------------------------------------

void funktion3(int i, double d)
{
    cout << "In funktion2(int): i = " << i << ", d = " << d << endl;
}

// ------------------------------------------------------------------
