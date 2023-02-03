#include <stdio.h>


// void afficher(int a) {
//   printf("%d", a);
// }

// void afficher(double a) {
//   printf("%lf", a);
// }

// int main(int, char **) {
//   afficher(1);
//   afficher(2.0);

//   return 0;
// }

class Exemple {
 public:
  void afficher() {
     std::cout << "hello" << std::endl;
  }
};

int main(int, char **) {
  
  Exemple e;
  
  e.afficher();

  return 0;
}
