#include <iostream>
using namespace std;
int main()
{
    cout << "Home task #17.1\n\n";
    cout << "================================\nPhone book\n";
    const int n = 3;
    unsigned long long int choice, mobTel[n], tel[n], temp;
    string name[n], temp2;
    bool isDataEntered = false;
    do {
        cout << "================================\nYour choice:\n";
        cout << "1 - Enter data\n";
        cout << "2 - Output data\n";
        cout << "3 - Sort by mobile number\n";
        cout << "4 - Sort by home phone number\n";
        cout << "5 - Sort by name\n";
        cout << "6 - Quit\n================================\n";
        cin >> choice;
        switch (choice) {
        case 1: {
            cout << "Please, enter data for each customer\n";
            isDataEntered = true;
            for (int i = 0; i < n; i++) {
                cout << "Input mobile number for ";
                cout << i + 1 << " customer:\n";
                cin >> mobTel[i];
                cout << "Input home phone number for ";
                cout << i + 1 << " customer:\n";
                cin >> tel[i];
                cout << "Input name for ";
                cout << i + 1 << " customer:\n";
                cin >> name[i];
            }
            break;
        }
        case 2: {
            if (isDataEntered) {
                cout << "Customer's data:\n--------------------------------\n";
                cout << "  Mobile num.\tHome num.  Name\n--------------------------------\n";
                for (int i = 0; i < n; i++) {
                    cout << i + 1 << " " << mobTel[i];
                    cout << "\t" << tel[i];
                    cout << "     " << name[i] << "\n";
                }
            }
            else {
                cout << "There is no data!" << "\n";
                cout << "Please, enter data for each customer at first\n";
            }
            break;
        }
        case 3: {
            if (isDataEntered) {
                cout << "Sorting data by mobile number ....\n";
                for (int i = 1; i < n; i++) {
                    for (int r = 0; r < n - i; r++) {
                        if (mobTel[r] < mobTel[r + 1]) {
                            temp = mobTel[r];
                            mobTel[r] = mobTel[r + 1];
                            mobTel[r + 1] = temp;
                            temp = tel[r];
                            tel[r] = tel[r + 1];
                            tel[r + 1] = temp;
                            temp2 = name[r];
                            name[r] = name[r + 1];
                            name[r + 1] = temp2;
                        }
                    }
                }
            }
            else {
                cout << "There is no data!" << "\n";
                cout << "Please, enter data for each customer at first\n";
            }
            break;
        }
        case 4: {
            if (isDataEntered) {
                cout << "Sorting data by home phone number ....\n";
                for (int i = 1; i < n; i++) {
                    for (int r = 0; r < n - i; r++) {
                        if (tel[r] < tel[r + 1]) {
                            temp = tel[r];
                            tel[r] = tel[r + 1];
                            tel[r + 1] = temp;
                            temp = mobTel[r];
                            mobTel[r] = mobTel[r + 1];
                            mobTel[r + 1] = temp;
                            temp2 = name[r];
                            name[r] = name[r + 1];
                            name[r + 1] = temp2;
                        }
                    }
                }
            }
            else {
                cout << "There is no data!" << "\n";
                cout << "Please, enter data for each customer at first\n";
            }
            break;
        }
        case 5: {
            if (isDataEntered) {
                cout << "Sorting data by name ....\n";
                for (int i = 1; i < n; i++) {
                    for (int r = 0; r < n - i; r++) {
                        if (name[r] < name[r + 1]) {
                            temp2 = name[r];
                            name[r] = name[r + 1];
                            name[r + 1] = temp2;
                            temp = mobTel[r];
                            mobTel[r] = mobTel[r + 1];
                            mobTel[r + 1] = temp;
                            temp = tel[r];
                            tel[r] = tel[r + 1];
                            tel[r + 1] = temp;
                        }
                    }
                }
            }
            else {
                cout << "There is no data!" << "\n";
                cout << "Please, enter data for each customer at first\n";
            }
            break;
        }
        case 6: {
            cout << "Goodbye!\n";
            break;
        }
        default:
            cout << "Wrong menu item!\n";
        }
    } while (choice != 6);
    return 0;
}