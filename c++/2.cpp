#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  int a,b;

  cout << "digite dois numeros inteiros separados por espaço: ";
  cin >> a >> b;
  cout << "a soma de " << a << " + " << b << " é igual a " << a + b;

  cout << endl << endl;
  return 0;
}