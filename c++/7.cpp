#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

    int opc;
    do {

    cout << "\nescolha a opção\n opc 1\n opc 2\n opc 3\n opc 0 para sair\n";
    cin >> opc;

    switch (opc){
    case 1: 
    cout << "opc 1";
    break;
    
    case 2:
    cout << "opc 2";
    break;
    
    case 3:
    cout << "opc 3";
    break;
    }

  }while(opc != 0);
  cout << endl << endl;
  return 0;
}