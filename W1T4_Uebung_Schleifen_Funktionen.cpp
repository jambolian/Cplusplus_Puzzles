#include <iostream>

using namespace std;


/*
1)
Es ist eine Funktion zu schreiben, die einen Primzahltest durchführt.
Sie erhält einen int-Wert und liefert einen bool-Wert zurück.

2)
Eine Funktion "nextPrime" erhält einen int-Wert und gibt ihren Primzahl-Nachfolger 
zurück:
cout << nextPrime(7) << endl;
gibt "11" aus

nextPrime(7) -> 11
nextPrime(11) -> 13
nextPrime(12) -> 13
nextPrime(13) -> 17

Für die Schleife können nun alle heute bekanntgewordenen Anweisungen 
verwendet werden.
Tipp: sinnvollerweise wird die Funktion aus Teilaufgabe 1) verwendet.
*/


bool is_prime (unsigned int a);
unsigned int next_prime (unsigned int a);

int main()
{
    setlocale(LC_ALL, "de_DE.utf-8");
    cout.setf(ios::boolalpha);

    unsigned int a = 23;
    unsigned int b = next_prime(a);

    cout << "The prime number after " << a << " is: " << b << endl;

/*     for (int j = 10; j > 0; j--)
    {
        cout << "The prime numbers after " << a << " are: " << next_prime(a) << endl;
        a = next_prime(a);
    } */
    return 0;
}

// --------------------------------------------------------------------------------
// Functions
// --------------------------------------------------------------------------------
bool is_prime (unsigned int a)
{
    unsigned int d = 2;
    bool primeCheck = true;

    if (a < 2)
    {
        primeCheck = false;
        return primeCheck;
    }

    while ( d*d <= a )
    {
        if ( (a%d) == 0 )
        {
            primeCheck = false;
            return primeCheck;
        }
        d++;
    }
    return primeCheck;
}

// --------------------------------------------------------------------------------

unsigned int next_prime (unsigned int a)
{
    unsigned int nextPrime;

    a++;
    while (!is_prime(a))
    {
        a++;
    }

    nextPrime = a;
    return nextPrime;
}

// --------------------------------------------------------------------------------
