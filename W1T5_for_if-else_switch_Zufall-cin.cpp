#include <iostream>

using namespace std;




/*
Die switch-case-Anweisung ist eine übersichtliche und
strukturierte Alternative zu geschachtelten if-else-Anweisungen,
bei denen auf Gleichheit geprüft wird.
Switch-case kann nur mit numerischen ganzzahligen Typen
angewendet werden oder auch mit Enumerations (wird später
behandelt).
Die einzelnen Abfragen erfolgen von oben nach unten und der
erste zutreffende wird genutzt.
Soll nur einer der Cases verwendet werden und nicht die weiteren,
ist die break-Anweisung zwingend nötig.
Der default-Block entspricht dem finalen 'else'. Dieser wird
betreten, wenn kein anderer Fall zutrifft oder der vorausgehende
Fall kein 'break' beinhaltet.
Besonderheit: die Position des default-Blocks ist beliebig.
Auch die Reihenfolge der Cases ist beliebig.
*/



// ------------------------------------------------------------------

void zufallszahlen()
{
	// Anzahl der Sekunden seit dem 1.1.1970
	unsigned int jetzt = (unsigned int)time(NULL);
	cout << "jetzt = " << jetzt << endl;

	int x = (365 * 24 * 60 * 60);
	int j = jetzt / x;
	jetzt %= (365 * 24 * 60 * 60);

	x = (24 * 60 * 60);
	int t = jetzt / x;
	jetzt %= x;

	x = (60 * 60);
	int h = jetzt / x;
	jetzt %= x;

	x = 60;
	int m = jetzt / x;
	jetzt %= x;
	
	int s = jetzt;
	

	cout << j << " Jahre, " << t << " Tage, " << h << " Stunden, " << m << " Minuten, " << s << " Sekunden\n";
    srand(jetzt);

	for (int i = 1; i <= 5; i++)
	{
		cout << rand() << endl;
	}

	cout <<  rand() % 100 + 1 << endl;
	cout <<  rand() % 100 + 1 << endl;
	cout <<  rand() % 100 + 1 << endl;
}


int main()
{
    setlocale(LC_ALL, "de_DE.utf-8");
    cout.setf(ios::boolalpha);

    zufallszahlen();

    return 0;
}