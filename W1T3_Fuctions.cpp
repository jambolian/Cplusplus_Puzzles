#include <iostream>

using namespace std;

void funktion1();
void funktion2(int x);
void funktion3(int i, double d);
int max(int a, int b, int c);
int max2(int a, int b, int c);
void forDemo();
void doWhileDemo();


/*
Jede Funktion hat eine Signatur!
Eine Signatur besteht aus dem Funktionsnamen und den Datentypen
der Argumente in der richtigen Reihenfolge.
Der Rückgabedatentyp gehört - im Gegensatz zu vielen Meinungen -
nicht zur Signatur!
Die Signatur dieser Funktion ist also max (int, int, int).

Ist eine Funktion mit demselben Namen, aber unterschiedlicher 
Signatur vorhanden, wird die Funktion als "überladen"
bezeichnet. Hier ist "max" zweifach überladen.
*/



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

    //doWhileDemo();
    forDemo();

    cout <<  max(1,2,3) << endl;
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

int max(int a, int b, int c)
{
    cout << "max(int, int, int)\n";
    int m;

    m = (a > b) ? (a > c) ?
    a : ((b > c) ? b : c) : c;

    //m = max(a, b);
    //m = max(m, c);

    return m;
}

// ------------------------------------------------------------------

int max2(int a, int b, int c)
{
    cout << "max(int, int, int)\n";
    int m;

    m = (a > b) ? (a > c) ? a : c
        : (b > c) ? b : c;


    

    //m = max(a, b);
    //m = max(m, c);

    return m;
}

// ------------------------------------------------------------------

// ------------------------------------------------------------------

/*
do
{
    ...
} while (<prädikat>);

Während bei einer while - Schleife die Bedingung im Schleifenkopf
steht, ist sie in einer do - while - Schleife im Fuss untergebracht.
Das hat zur Folge, daß in diese Schleife ohne Bedingung eingetreten
wird und das Prädikat erst nach dem Schleifenkörper ausgewertet
wird.Eine do - while - Schleife wird folglich mindestens einmal
durchlaufen.
*/
void doWhileDemo()
{
    int i = 1;

    do
    {
        cout << "(01) i = " << i << endl;
        i++;
    } while (i <= 5);
    cout << "(01) Nach Schleife: i = " << i << endl << endl;

    i = 0;

    do
    {
        i++;
        cout << "(02) i = " << i << endl;
    } while (i <= 4);
    cout << "(05) Nach Schleife: i = " << i << endl << endl;
}

// ------------------------------------------------------------------

/*
While-Schleifen sind ideal, wenn die Anzahl der Durchläufe nicht
bekannt ist.
Das ist bei for-Schleifen anders. Sie haben einen Startwert, zählen
um eine bestimmte Schrittweite hoch oder runter und besitzen eine
Abbruchbedingung.

Sie haben die Grundstruktur
for (Startwert; Bedingung; Wertänderung)
{
    ...
}

Kurz: for (A; B; C) { K } . Der Ablauf: A B K C B K C B K C ... K C B.
*/
void forDemo()
{
    for (int i = 1; i <= 5; i++)
        cout << "(01) i = " << i << endl;
}

// ------------------------------------------------------------------