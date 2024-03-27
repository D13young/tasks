#include <iostream>
using namespace std;
int main()
{
    cout << "Home task #12\n\n";
    int s;
    int r = 11;
    do
    {
        cout << R"(         ___________     ___________     ___________     ___________     ___________
         |* * * * *|     |*        |     |* * * * *|     |         |     |* * * * *|
         |  * * * *|     |* *      |     |  * * *  |     |         |     |  * * *  |
         |    * * *|     |* * *    |     |    *    |     |    *    |     |    *    |
         |      * *|     |* * * *  |     |         |     |  * * *  |     |  * * *  |
         |________*|     |* * * * *|     |_________|     |* * * * *|     |* * * * *|
              1               2               3               4               5
         ___________     ___________     ___________     ___________     ___________
         |*       *|     |*        |     |        *|     |* * * * *|     |        *|
         |* *   * *|     |* *      |     |      * *|     |* * * *  |     |      * *|
         |* * * * *|     |* * *    |     |    * * *|     |* * *    |     |    * * *|
         |* *   * *|     |* *      |     |      * *|     |* *      |     |  * * * *|
         |*_______*|     |*________|     |________*|     |*________|     |* * * * *|
              6               7               8               9               10 )" << "\n";

        cout << "Select a shape (1 - 10) or 11 to exit: ";
        cin >> s;
        for (int i = 1; i <= r; i++) {
            for (int j = 1; j <= r; j++) {
                switch (s) {
                case 0: return 0;
                    break;
                case 1: if (j >= i) cout << "* "; else cout << "  ";
                    break;
                case 2: if (j <= i) cout << " *"; else cout << " ";
                    break;
                case 3: if (j >= i && i + j <= r + 1) cout << " *"; else cout << "  ";
                    break;
                case 4: if (j <= i && i + j >= r + 1) cout << "* "; else cout << "  ";
                    break;
                case 5: if (j >= i && i + j <= r + 1 || j <= i && i + j >= r + 1) cout << "* "; else cout << "  ";
                    break;
                case 6: if (j <= i && i + j <= r + 1 || j >= i && i + j >= r + 1) cout << "* "; else cout << "  ";
                    break;
                case 7: if (j <= i && i + j <= r + 1) cout << " *"; else cout << " ";
                    break;
                case 8: if (j >= i && i + j >= r + 1) cout << "* "; else cout << "  ";
                    break;
                case 9: if (j + i > r + 1) cout << " "; else cout << " *";
                    break;
                case 10: if (j + i < r + 1) cout << "  "; else cout << "* ";
                    break;
                case 11: cout << "You have chosen the exit. goodbye\n";
                    return 0;
                    break;
                default: cout << "Wrong choice" << "\n";
                    return 0;
                    break;
                }
            }
            cout << "\n";
        }
    } while (s);
    return 0;
}