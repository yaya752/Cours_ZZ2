#include <iostream>
#include <string>

// int main(int, char **) {  // parametres muets
//   std::string prenom;     // type chaines de caracteres"
//   std::string nom;
//   int age;

//   std::cout << "Quel est votre prénom ?" << std::endl;
//   std::cin  >> prenom;
//   std::cout << "Quel est votre nom ?" << std::endl;
//   std::cin  >> nom;
//   std::cout << "Quel est votre age ?" << std::endl;
//   std::cin  >> age ;
//   std::cout << "Bonjour "<< prenom <<" "<< nom << std::endl;
//   std::cout << "Bonjour "<< prenom <<":"<< nom << std::endl;
//   return 0;
// }

// int main(int, char **) {  // parametres muets
//     std::string chaine1;     // type chaines de caracteres"
//     std::string chaine2;

//     std::cout << "première chaîne" << std::endl;
//     std::cin  >> chaine1;
//     std::cout << "Seconde chaîne" << std::endl;
//     std::cin  >> chaine2;
//     if (chaine1 > chaine2)
//     {
//         std::cout << "Seconde chaîne la plus petite " << std::endl;
//         std::cout << chaine1.size() << std::endl;
//     }
//     else if (chaine1 < chaine2)
//     {
//         std::cout << "Première chaîne la plus petite " << std::endl;
//         std::cout << chaine2.size() << std::endl;
//     }
//     return 0;
// }


// using std::cout;
// using std::endl;

// /* on peut utiliser le mot clé const pour définir la taille d'un tableau statique en C++ */
// /* Jamais de #define pour cela */
// const int TAILLE = 10;

// int main(int, char **) {
//   int tab[TAILLE];
  
//   for (int i=0; i < TAILLE; ++i) {
//     tab[i] = i %2;
//     cout << tab[i] << " ";
//   }

//   cout << endl;

//   return TAILLE;
// }


// int main() {

//     char s[10];
//     //std::string s;
//     // char *      s;

//     std::cin >> s;

//     std::cout << "#" << s << "#" << std::endl;
//     for (int i = 0; s[i]!='\0'; ++i)
//         std::cout << "@" << s[i] << "@" << (int)s[i] << "@" << std::endl;

//     return 0;
// }
// int main(int, char **)
// {
//     int  a = 5;
//     int &r = a;

//     std::cin  >> r;
//     std::cout << a;
// }

// void fonction1(int a) {
//   std::cout << &a << std::endl;
// }

// void fonction2(int& a) {
//   std::cout << &a << std::endl;
// }

// int main(int, char **) {
//   int age = 45;

//   std::cout << &age << std::endl;
//   fonction1(age);
//   fonction2(age);

//   return 0;
// }


// int main(int, char**) {
//    int * p = new int;

//    *p = 3;
//    std::cout << *p << std::endl;

//     delete p;

//    return 0;
// }

// int main(int, char**) {
//    const int TAILLE = 500;

//    int * p = new int[TAILLE];

//    for(auto i = 0; i< TAILLE; ++i ) p[i] = i;
//    for(auto i = 0; i< TAILLE; ++i ) std::cout << p[i] << std::endl;

//    //delete p;      
//    delete [] p;

//    return 0;
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
