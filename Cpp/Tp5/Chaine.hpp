#ifndef CPP5__CHAINE_HPP
#define CPP5__CHAINE_HPP

#include <iostream>
#include <fstream>

class Chaine {
    public:
        int capacite;
        char* tab;
    
    public:
        Chaine();
        Chaine(const char* inCS);
        Chaine(int capa);
        Chaine( const Chaine& );           // Declare copy constructor.
        Chaine& operator=(const Chaine& x);
        //std::ostream& operator<<(std::ostream &fr);
        ~Chaine();
        
    public:
        char* c_str() const;
        int getCapacite() const;
        void afficher(std::ostream &) const;
        void afficher() const;
        
};

std::ostream& operator<<(const std::ostream &fr, Chaine x){
    return fr << x.tab;
}
#endif