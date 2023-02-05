#ifndef _GROUPE
#define _GROUPE
#include "Forme.hpp"
class Groupe :public Forme{
    public:
        std::string toString();
        Groupe();
        ~Groupe();
        Forme * Listef[];
};
#endif