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


int main()
{

int main()
{
    setlocale(LC_ALL, "de_DE.utf-8");
    cout.setf(ios::boolalpha);

    doWhileDemo();

    return 0;
}