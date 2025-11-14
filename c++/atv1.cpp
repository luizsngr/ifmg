#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  int i;
  int cont = 1;
  srand(time(0)); 
  int n = rand() % 10+1;
    
    while (cont < 6 && i !=n)
    {
      cout << "tente acertar o numero sorteado entre 1 e 10:  " << endl;
      cin >> i;
      if (i > n){
        cout << "Muito alto!\n";
      } 
      else if (i < n){
        cout << "Muito baixo!\n";
      }
      else if (i == n){
        cout << "Você acertou!\n";
      }
      cont++;

      if (cont == 6){
        cout << "Você usou todas as tentativas! O numero sorteado era " << n;

      }
    }    
  }
