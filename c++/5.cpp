#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  int i = 0;

  while(i <= 9){
    cout << "Valor " << i + 1;
    cout << endl;
    i++;
  }
 
  cout << endl << endl;
  return 0;
}