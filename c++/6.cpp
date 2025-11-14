#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  for(int i = 0; i <= 9; i++){
    cout << "Valor " << i+1;
    cout << endl;
  }
  cout << endl << endl;
  return 0;
}