#ifndef CPP5__CHAINE_HPP
#define CPP5__CHAINE_HPP

#include <iostream>
#include <fstream>

class Chaine {
    int capacite;
    char* tab[];
    public:
        Chaine();
    public:
        char* c_str() const;
        int getCapacite() const;
        
};

#endif
