#ifndef CPP5__VECTEUR
#define CPP5__VECTEUR
#include <iostream>
#include <fstream>

class Vecteur {
    public:
        int capacite;
        float* tab;
        int cursor;
    
    public:
        Vecteur(int capa =10);
        Vecteur(const Vecteur& c1);
        ~Vecteur();
        
    public:
        int capacity() const;
        int size() const;
        void push_back(float a);

};
#endif