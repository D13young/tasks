#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;
int main() {
    cout << "Home task #14.3\n\n";
    cout << "Welcome to the \"GUESS MY NUMBER\" game\n";
    int choice, random, game;
    int lives, number;
    int a, b;
    bool result = false;
    int  sumscore = 0, score = 0, scorebot = 0;
    srand(time(NULL));
    do {
        cout << "1 - Guess the number from 1 to 10\n2 - Guess the number from 10 to 100\n3 - Exit\n";
        cin >> game;
        result = false;
        switch (game) {
        case 1: {
            cout << "Computer makes a number\n";
            Sleep(2000);
            a = 1;
            b = 10;
            random = a + rand() % (b - a);
            //cout << ">" << random << "<  randomnoe chislo \n\n";
            lives = (b - a + 1) / 2;
            while (result != true) {
                cout << "====================\n" << "Lives left " << lives;
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
                }
            }
            sumscore += score;
            cout << "\nScore  " << sumscore << "\n";
            break;
        }
        case 2: {
            cout << "Computer makes a number\n";
            Sleep(2000);
            a = 10;
            b = 100;
            random = a + rand() % (b - a);
            //cout << ">" << random << "<  randomnoe chislo \n\n";
            lives = (b - a + 1) / 4;
            while (result != true) {
                cout << "====================\n" << "Lives left " << lives << "\n";
                cout << "\nGuess the number from 10 to 100: ";
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
                }
            }
        }
              sumscore += score;
              cout << "\nScore  " << sumscore << "\n";
              break;
        }
    } while (game != 3);
    return 0;
}