/*

Programa em C++ que implementa um caontainer e guarda 3 tipos de dados:
int, float e string.

*/
/*
* Author:  Igor Vinicius Freitas de Souza
* GitHub: https://github.com/igor1043
* E-mail: igorviniciusfreitasouza@gmail.com
*/
#include<iostream>
#include<string>
using namespace std;
template<class Tipo>
class Classe
{
  private:
    Tipo estoque[5];

  public:
    void set_dados(){
      for(int x=0; x<5; x++){
        cout<<"\nDigite um valor: "; cin>>estoque[x];
      }
    }
    void print_dados(){
      for(int y=0; y<5; y++)
        cout<<estoque[y]<< "\n";
    }
};
int main(){
  Classe<int> Z;
  Classe<float> W;
  Classe<string> Q;
  Z.set_dados();
  W.set_dados();
  Q.set_dados();

  Z.print_dados();
      cout<<"\n";
  W.print_dados();
      cout<<"\n";
  Q.print_dados();
      cout<<"\n\n";

    return 0;
}
