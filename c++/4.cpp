#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  float nota;

  cout << "Digite a nota do aluno:";
  cin >> nota;
    if(nota < 5.0){
        cout << "Aluno reprovado!";
    } 
    else if (nota < 7.0 && nota > 5.0){
        cout << "Aluno de recuperação!";
    }
    else{
      cout << "Aprovado!";
    }
  cout << endl << endl;
  return 0;
}