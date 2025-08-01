#include <iostream>

using namespace std;



/* Es ist ein Programm zu schreiben, das eine Zufallszahl zwischen 1 und 100 ermittelt. 
Diese Zahl ist durch den Spieler durch geschicktes Raten herauszubekommen. Der Rechner 
antwortet nach jeder Eingabe nur mit "grösser", "kleiner" oder "richtig in x Versuchen". */


int gen_num();
void guessGame (int num);

int main()
{
    setlocale(LC_ALL, "de_DE.utf-8");
    cout.setf(ios::boolalpha);


    int randomNumber = gen_num();
    guessGame(randomNumber);

    return 0;
}

int gen_num()
{
    unsigned int randNum;
    unsigned int now;
    now = (unsigned int)time(NULL);
    srand(now);
    randNum = (rand() % 100) + 1;
    return randNum;
}


int get_num(){

    int number;

    while(1)
    {
        cout << "Guess the code! (hint: 1 < answer <= 100): ";
        cin >> number;
        if (number <= 100 && number >= 1)
        {
            break;
        }
        else{
            cout << "Out of Range! Try again. Guess the code (hint: 1 < answer <= 100): ";
        }
    }
    return number;
}

void guessGame (int num)
{
    int guess;
    int trialNum = 0;

    do{
        guess = get_num();
        trialNum++;
        if(guess == num)
            {
                cout << "Congrats! You got it! the code is: " << num <<endl;
                cout << "You guessed it after " << trialNum << " trials." << endl;
            }
            else{
                if (guess < num)
                {
                    cout << "Try a bigger number" << endl;
                }
                else
                {
                    cout << "Try a smaller number" << endl;
                }
            }    
    } while (guess != num);
}