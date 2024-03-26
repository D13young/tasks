#include <iostream>
using namespace std;
int main() {
    int choice = 0, person = 0, price = 0;
    bool run = true;
    char answer;
    cout << "------------------------\n";
    cout << "\tGRILNICA" << endl;
    cout << "grill and bar restaurant\n";
    cout << "------------------------\n";
    cout << "Тumber of persons: ";
    cin >> person;
        for (int i = 1; i <= person; i++) {
            run = true;
            cout << "Person: " << i << "\n";
            while (run) {
                do {
                    const int sh1 = 250, sh2 = 300, sh3 = 290, sh4 = 270;
                    const int dessert1 = 60, dessert2 = 80, dessert3 = 45, dessert4 = 75;
                    const int drink1 = 50, drink2 = 70, drink3 = 80, drink4 = 90;
                    const int wok1 = 160, wok2 = 180, wok3 = 220, wok4 = 130;
                    int select;
                    cout << "------------------------\n";
                    cout << "\tMenu\n";
                    cout << "1 - Shaurma\n";
                    cout << "2 - Wok\n";
                    cout << "3 - Drinks\n";
                    cout << "4 - Dessert\n";
                    cout << "Enter 0 to exit\n";
                    cin >> choice;
                    if (choice == 1) {
                        cout << "------------------------\n" << "1 - shaurma with cheese\n" << "2 - shaurma with bacon\n" << "3 - shaurma with pork\n" << "4 - shaurma with chicken\n";
                        cout << "------------------------\n";
                        cout << "Your choice: ";
                        cin >> select;
                        switch (select) {
                            case 1: {
                                price += sh1;
                                cout << "You need to pay: " << price << " rub.\n";
                                break;
                            }
                            case 2: {
                                price += sh2;
                                cout << "You need to pay: " << price << " rub.\n";
                                break;
                            }
                            case 3: {
                                price += sh3;
                                cout << "You need to pay: " << price << " rub.\n";
                                break;
                            }
                            case 4:{
                                price += sh4;
                                cout << "You need to pay: " << price << " rub.\n";
                                break;
                            }
                        }  
                    }
                    if (choice == 2) {
                        cout << "------------------------\n" << "1 - wok with chicken\n" << "2 - wok with pork\n" << "3 - wok with seafood\n" << "4 - vegetarian wok\n";
                        cout << "------------------------\n";
                        cout << "Your choice: ";
                        cin >> select;
                        switch (select) {
                            case 1: {
                                price += wok1;
                                cout << "You need to pay: " << price << " rub.\n";
                                break;
                            }
                            case 2: {
                                price += wok2;
                                cout << "You need to pay: " << price << " rub.\n";
                            break;
                            }
                            case 3: {
                                price += wok3;
                                cout << "You need to pay: " << price << " rub.\n";
                                break;
                            }
                            case 4: {
                                price += wok4;
                                cout << "You need to pay: " << price << " rub.\n";
                                break;
                            }
                       }
                    }
                    if (choice == 3) {
                        cout << "------------------------\n" << "1 - Pepsi\n" << "2 - Fanta\n" << "3 - Sprite\n" << "4 - Mineral water\n";
                        cout << "------------------------\n";
                        cout << "Your choice: ";
                        cin >> select;
                        switch (select) {
                            case 1:{
                                price += drink1;
                                cout << "You need to pay: " << price << " rub.\n";
                                break;
                            }
                            case 2: {
                                price += drink2;
                                cout << "You need to pay: " << price << " rub.\n";
                                break;
                            }
                            case 3: {
                                price += drink3;
                                cout << "You need to pay: " << price << " rub.\n";
                                break;
                            }
                            case 4: {
                                price += drink4;
                                cout << "You need to pay: " << price << " rub.\n";
                                break;
                            }
                        }
                    }
                    if (choice == 4) {
                        cout << "------------------------\n" << "1 - Apple pie\n" << "2 - Raspberry pie\n" << "3 - Blueberry pie\n" << "4 - Pineapple pie\n";
                        cout << "------------------------\n";
                        cout << "Your choice: ";
                        cin >> select;
                        switch (select) {
                            case 1: {
                                price += dessert1;
                                cout << "You need to pay: " << price << " rub.\n";
                            break;
                            }
                            case 2: {
                                price += dessert2;
                                cout << "You need to pay: " << price << " rub.\n";
                                break;
                            }
                            case 3: {
                                price += dessert3;
                                cout << "You need to pay: " << price << " rub.\n";
                                break;
                            }
                            case 4: {
                                price += dessert4;
                                cout << "You need to pay: " << price << " rub.\n";
                                break;
                            }
                        }
                    }
                    if (choice == 0) {
                        run = false; 
                        break;
                    }
                }
                while(person);
            }
        }
        cout << "You need to pay: " << price << " rub.\n";
        cout << "Thank you for your purchase!" << endl;
    return 0;
}