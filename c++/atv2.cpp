#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int c, a, b;

    do {
        cout << "Digite 1 para somar e 0 para sair: ";
        cin >> c;

        if (c == 1) {
            cout << "Digite 2 números inteiros para serem somados: ";
            cin >> a >> b;
            cout << "Soma: " << a + b << endl;
        }

    } while (c != 0);

    return 0;
}