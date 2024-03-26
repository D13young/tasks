#include <iostream>
using namespace std;
int main()
{
    cout << "Home task #9.1\n\n";
    char s;
    cout << "Enter your sign: ";
    cin >> s;
    if (isalpha(s)) {
        cout << "This is a letter\n";
    }
    else if (isdigit(s)) {
        cout << "This is a number\n";
    }
    else if (ispunct(s)) {
        if (s == 37 || s == 42 || s == 43 || s == 47 || s >= 60 && s <= 62) {
            cout << "This is a mathematical symbol\n";
        }
        else {
            cout << "This is a punctuation mark\n";
        }
    }
    else {
        cout << "This is unknown symbol\n";
    }
    return 0;
}