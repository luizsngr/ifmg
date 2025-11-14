#include <iostream>
#include <windows.h>
using namespace std;
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
  
  int idade;
  string nome;
  cout << "digite seu nome: ";
  cin >> nome;
  cout << "digite sua idade: ";
  cin >> idade;
  cout << "Seu nome é " << nome << " e sua idade é " << idade;
  
  cout << endl << endl;
  return 0;
}