#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  float a,b,c;

  cout << "digite tres numeros separados pro espaço: ";
  cin >> a >> b >> c;
  cout << "a media dos numeros é: " << (a+b+c)/3;
 
 
  cout << endl << endl;
  return 0;
}