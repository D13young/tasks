#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;
int main()
{
    cout << "Home task #14.4\n\n";
    cout << "Welcome to the \"GUESS MY NUMBER\" game\n";
    int choice, random;
    int round = 3, roundcount = 1;
    int lives, number;
    int a, b;
    bool result = false;
    int  sumscore = 0, score = 0, scorebot = 0;
    srand(time(NULL));
    while (roundcount <= 3) {
        cout << "Raund " << roundcount << "\n";
        cout << "Computer makes a number\n";
        Sleep(2000);
        result = false;
        roundcount++;
        a = 1;
        b = 10;
        random = a + rand() % (b - a);
        //cout << "\t >" << random << "<  Zagadannoe 4islo \n\n";
        lives = (b - a + 1) / 2;
        scorebot = lives * 5;
        while (result != true) {
            cout << "====================\n";
            cout << "Lives left " << lives;
            cout << "\nGuess the number from 1 to 10: ";
            cin >> number;
            if (number == random) {
                cout << "You guessed!!!\n";
                result = true;
                score = lives * 5;
                cout << "Your score: " << score << "\n";
                cout << R"(
         @@@@@@@@@@
        @@@ @@@@ @@@
        @@@ @@@@ @@@
        @@@@@@@@@@@@
        @@ @@@@@@ @@
        @@@@    @@@@
         @@@@@@@@@@

       YOU ARE ALIVE!!!
                    )";
            }
            else {
                cout << "WRONG!!!\n";
                cout << "- 1 live!\n";
                lives--;
                cout << "====================\n" << "Lives left " << lives << "\n";
                do {
                    cout << "Do you need a hint? Cost one life\n";
                    cout << "1 - Yes\n";
                    cout << "0 - No\n";
                    cin >> choice;
                    if (choice == 1) {
                        if (number > random) {
                            cout << "Number is less\n";
                            lives--;
                        }
                        else {
                            cout << "Number is more\n";
                            lives--;
                        }
                    }
                } while ((choice != 1) && (choice != 0));
                if (lives <= 0) {
                    cout << "YOU LOSE!!!\n\n";
                    cout << "Computer score: " << scorebot << endl;
                    cout << R"(
          @@@@@@@@@
        @@@@@@@@@@@@@ 
        @@   @@@   @@
        @@@@@@ @@@@@@
        @@@@@   @@@@@
           @@@@@@@
           @ @ @ @

       YOU ARE DEAD!!!
                    )";
                    return 0;
                }
                else
                {

                }
            }
        }
        sumscore += score;
        cout << "\nScore  " << sumscore << "\n";
    }
    cout << "Do you want the next level? 'Y' or 'N'\n";
    char vib;
    cin >> vib;
    if (vib == 'Y' || vib == 'y') {
        cout << "Guess the number from 10 to 100\n";
        roundcount = 1;
        while (roundcount <= 2) {
            cout << "Raund " << roundcount << "\n";
            cout << "Computer makes a number\n";
            Sleep(2000);
            result = false;
            roundcount++;
            a = 10;
            b = 100;
            random = a + rand() % (b - a);
            //cout << ">" << random << "<  Zagadannoe 4islo \n\n";
            lives = (b - a + 1) / 2;
            scorebot = lives * 10;
            while (result != true) {
                cout << "====================\n" << "Lives left " << lives << "\n";
                cout << "\nGuess the number: ";
                cin >> number;
                if (number == random) {
                    cout << "You guessed!!!\n";
                    result = true;
                    score = lives * 10;
                    cout << "Your score:  " << score << "\n";
                    cout << R"(
         @@@@@@@@@@
        @@@ @@@@ @@@
        @@@ @@@@ @@@
        @@@@@@@@@@@@
        @@ @@@@@@ @@
        @@@@    @@@@
         @@@@@@@@@@

       YOU ARE ALIVE!!!
                    )";
                }
                else {
                    cout << "WRONG!!!\n";
                    cout << "- 1 live!\n";
                    lives--;
                    cout << "====================\n" << "Lives left " << lives << "\n";
                    do {
                        cout << "Do you need a hint? Cost one life\n";
                        cout << "1 - Yes\n";
                        cout << "0 - No\n";
                        cin >> choice;
                        if (choice == 1) {
                            if (number > random) {
                                cout << "Number is less\n";
                                lives--;
                            }
                            else {
                                cout << "Number is more\n";
                                lives--;
                            }
                        }
                    } while ((choice != 1) && (choice != 0));
                    if (lives <= 0) {
                        cout << "YOU LOSE!!!\n";
                        cout << "Computer score: " << scorebot << endl;
                        cout << R"(
          @@@@@@@@@
        @@@@@@@@@@@@@ 
        @@   @@@   @@
        @@@@@@ @@@@@@
        @@@@@   @@@@@
           @@@@@@@
           @ @ @ @

       YOU ARE DEAD!!!
                    )";
                        return 0;
                    }
                    else {

                    }
                }
            }
            sumscore += score;
            cout << "Score " << sumscore << "\n";
        }
    }
    else {
        vib == 'N';
        cout << "\nGoodbye!!!\n";
    }
    return 0;
}