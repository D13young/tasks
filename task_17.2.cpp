#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;
int first = 0, n, one, two, co = 0, ol, game = 0, game2 = 0, choice, sum1 = 0, sum2 = 0;
bool player = true;
void Dice(int i)
{
    if (i == 1) n = 1;
    else if (i == 2 && one == 1) n = 2;
    else if (i == 2 && one == 3 || i == 2 && one == 2) n = 3;
    else if (i == 2 && one == 4 || i == 2 && one == 5 || i == 2 && one == 6) n = 4;
    else if (i == 3 && one == 3 || i == 3 && one == 1 || i == 3 && one == 5) n = 5;
    else if (i == 3 && one == 2 || i == 3 && one == 4) n = 2;
    else if (i == 3 && one == 6) n = 4;
    else if (i == 4 && one == 1) n = 2;
    else if (i == 4 && one == 3 || i == 4 && one == 2) n = 6;
    else if (i == 4 && one == 4 || i == 4 && one == 5 || i == 4 && one == 6) n = 4;
    else if (i == 5) n = 7;
    switch (n) {
    case 1:
        cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187;
        break;
    case 2:
        cout << (char)186 << "       " << (char)186;
        break;
    case 3:
        cout << (char)186 << " o     " << (char)186;
        break;
    case 4:
        cout << (char)186 << " o   o " << (char)186;
        break;
    case 5:
        cout << (char)186 << "   o   " << (char)186;
        break;
    case 6:
        cout << (char)186 << "     o " << (char)186;
        break;
    case 7:
        cout << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188;
        break;
    }
}
int main()
{
    cout << "Home task #17.2\n\n";
    srand(time(NULL));
    cout << R"(             _______________              _______________
            |\              \            /              /|
            | \   0      0   \          /   0          / | 
            |  \              \        /       0      /  |
            |   \   0      0   \      /           0  /   |
            |    \______________\    /______________/    |    
             \   |              |    |              |    /
              \  |              |    |   0      0   |   /
               \ |       0      |    |       0      |  /
                \|              |    |   0      0   | /
                 \______________|    |______________|/ )";

    cout << "\n\nWelcome to the dice game!!!\nThe winner is the one with the sum of 3 more throws\n\n";
    while (game < 1) {
        cout << "=========================\n1 - Roll the dice who will be first\n2 - Exit\nMake a choice: ";
        cin >> choice;
        if (choice == 1) {
            for (int j = 0; j <= 1; j++) {
                Sleep(2000);
                one = 1 + (rand() % 6);
                cout << "=========================\n";

                if (player) cout << "\tYour roll\n";
                if (!player) cout << "\tComputer roll\n";

                cout << "=========================\n";
                for (int i = 1; i <= 5; i++) {
                    cout << "\t";
                    Dice(i);
                    cout << endl;
                }
                if (player) {
                    sum1 = sum1 + one;
                    player = false;
                    continue;
                }
                if (!player) {
                    sum2 = sum2 + one;
                    player = true;
                }
            }
        }
        else if (choice == 2) return 0;
        else{cout << "\nWrong choice\n"; continue;}
        if (sum1 == sum2){ cout << "\nReplay\n"; continue;}
        game++;
    }
    cout << "\nYour result: " << sum1 << endl << "Computer result: " << sum2 << endl;
    if (sum1 > sum2){ cout << "\nYou first!!!\n"; first = 1;}
    else if (sum1 < sum2){ cout << "\nComputer first!!!\n"; first = 2;}
    sum1 = 0, sum2 = 0;
    first = 1;
    while (game2 < 3) {
        cout << "=========================\n1 - Roll the dice\n2 - Exit\nMake a choice: ";
        cin >> choice;
        if (choice == 1) {
            for (int j = 0; j <= 1; j++) {
                Sleep(2000);
                one = 1 + (rand() % 6);
                two = 1 + (rand() % 6);

                cout << "=========================\n";
                if (first == 1) {
                    if (player) cout << "\tYour roll\n";
                    if (!player) cout << "\tComputer roll\n";
                }
                else if (first == 2) {
                    if (!player) cout << "\tYour roll\n";
                    if (player) cout << "\tComputer roll\n";
                }
                cout << "=========================\n";
                for (int i = 1; i <= 5; i++) {
                    Dice(i);
                    if (co % 2 == 0) {
                        cout << "\t";
                        i--;
                        ol = one;
                        one = two;
                    }
                    else {
                        cout << endl;
                        one = ol;
                    }
                    co++;
                }
                if (first == 1 && player) {
                    sum1 = sum1 + one + two;
                    player = false;
                    continue;
                }
                if (first == 2 && player) {
                    sum2 += one + two;
                    player = false;
                    continue;
                }
                if (first == 2 && !player) {
                    sum1 += one + two;
                    player = true;

                }
                if (first == 1 && !player) {
                    sum2 += one + two;
                    player = true;
                }
            }
        }
        else if (choice == 2) return 0;
        else { cout << "\nWrong choice\n"; continue; }
        game2++;
    }
    cout << "\nYour result: " << sum1 << endl << "Computer result: " << sum2 << endl;
    if (sum1 > sum2) cout << "\nYou win!!!\n";
    else cout << "\nYou lose!!!\n";
    return 0;
}