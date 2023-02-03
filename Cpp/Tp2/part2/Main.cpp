#include <iostream>

class Bavarde {
  int n;
  public:
    Bavarde(int v = 0):n{v}
    {
      std::cout << "création de " << n << std::endl;
    }
    ~Bavarde() 
    {
      std::cout << "Tais-toi " << n << std::endl;
    }
    int get()
    {
      return n;
    }  
} bizarre(1);  

Bavarde globale(2);

void fonction(Bavarde b) {
  std::cout << "code de la fonction" << std::endl;
}

int main(int, char **) {
  Bavarde b1(3);
  Bavarde b2(4);
  Bavarde *p = new Bavarde(5);
  fonction(b1);
  std::cout << Bavarde(0).get() << std::endl;
  delete p;
  return 0;
}