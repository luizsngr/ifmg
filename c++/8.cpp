#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  srand(time(0)); 
  int n = rand() % 10+1;
  cout << "Numero sorteado: " << n << endl;
 
  cout << endl << endl;
  return 0;
}